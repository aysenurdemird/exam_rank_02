#include <stdlib.h>

int ft_abs(int x) {
  if (x < 0)
    return -x;
  return x;
}

int *ft_rrange(int start, int end) {
  int *result = malloc(sizeof(int) * ft_abs(end - start) + 1);
  int i = 0;
  if (end > start) {
    while (end > start) {
      result[i] = end;
      end--;
      i++;
    }
    result[i] = end;
  } else if (end < start) {
    while (end < start) {
      result[i] = end;
      end++;
      i++;
    }
    result[i] = end;
  }
  return result;
}
