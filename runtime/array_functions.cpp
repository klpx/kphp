#include "runtime/array_functions.h"

array<string> explode(char delimiter, const string &str, int limit) {
  array<string> res(array_size(limit < 10 ? limit : 1, 0, true));

  int s_len = str.size();
  const char *s = str.c_str();
  int prev = 0;

  if (limit > 1) {
    for (int i = 0; i < s_len;) {
      if (delimiter == s[i]) {
        res.push_back(string(s + prev, i - prev));
        i++;
        prev = i;
        limit--;
        if (limit == 1) {
          break;
        }
      } else {
        i++;
      }
    }
  }
  res.push_back(string(s + prev, s_len - prev));

  return res;
}

array<string> f$explode(const string &delimiter, const string &str, int limit) {
  if (limit < 1) {
    php_warning("Wrong limit %d specified in function explode", limit);
    limit = 1;
  }
  int d_len = delimiter.size();
  if (d_len == 1) {
    return explode(delimiter[0], str, limit);
  }
  if (d_len == 0) {
    php_warning("Empty delimiter in function explode");
    return array<string>();
  }

  array<string> res(array_size(limit < 10 ? limit : 1, 0, true));

  const char *d = delimiter.c_str();
  const char *s = str.c_str();
  int s_len = str.size();
  int prev = 0;

  if (limit > 1) {
    for (int i = 0; i < s_len;) {
      int j;
      for (j = 0; j < d_len && d[j] == s[i + j]; j++) {
      }
      if (j == d_len) {
        res.push_back(string(s + prev, i - prev));
        i += d_len;
        prev = i;
        limit--;
        if (limit == 1) {
          break;
        }
      } else {
        i++;
      }
    }
  }
  res.push_back(string(s + prev, s_len - prev));

  return res;
}

array<var> range_int(int from, int to, int step) {
  if (from < to) {
    if (step <= 0) {
      php_warning("Wrong parameters from = %d, to = %d, step = %d in function range", from, to, step);
      return array<var>();
    }
    array<var> res(array_size((to - from + step) / step, 0, true));
    for (int i = from; i <= to; i += step) {
      res.push_back(i);
    }
    return res;
  } else {
    if (step == 0) {
      php_warning("Wrong parameters from = %d, to = %d, step = %d in function range", from, to, step);
      return array<var>();
    }
    if (step < 0) {
      step = -step;
    }
    array<var> res(array_size((from - to + step) / step, 0, true));
    for (int i = from; i >= to; i -= step) {
      res.push_back(i);
    }
    return res;
  }
}

array<var> range_string(const string &from_s, const string &to_s, int step) {
  if (from_s.empty() || to_s.empty() || from_s.size() > 1 || to_s.size() > 1) {
    php_warning("Wrong parameters \"%s\" and \"%s\" for function range", from_s.c_str(), to_s.c_str());
    return array<var>();
  }
  if (step != 1) {
    php_critical_error ("unsupported step = %d in function range", step);
  }
  int from = (unsigned char)from_s[0];
  int to = (unsigned char)to_s[0];
  if (from < to) {
    array<var> res(array_size(to - from + 1, 0, true));
    for (int i = from; i <= to; i++) {
      res.push_back(f$chr(i));
    }
    return res;
  } else {
    array<var> res(array_size(from - to + 1, 0, true));
    for (int i = from; i >= to; i--) {
      res.push_back(f$chr(i));
    }
    return res;
  }
}

array<var> f$range(const var &from, const var &to, int step) {
  if ((from.is_string() && !from.is_numeric()) || (to.is_string() && !to.is_numeric())) {
    return range_string(from.to_string(), to.to_string(), step);
  }
  return range_int(from.to_int(), to.to_int(), step);
}


