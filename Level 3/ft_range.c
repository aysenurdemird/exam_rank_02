#include <stdlib.h>

int ft_abs(int x)
{
  if (x < 0)
    return -x;
  return x;
}

int     *ft_range(int start, int end)
{
  int *result = malloc(sizeof(int) * (ft_abs(end - start) + 1));
  int i = 0;
  if (start > end)
  {
    while (start > end)
    {
      result[i] = start;
      start--;
      i++;
    }
    result[i] = start;
  }
  else if (end > start)
  {
    while(end > start)
    {
      result[i] = start;
      start++;
      i++;
    }
    result[i] = start;
  }
  return result;
}