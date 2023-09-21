#include <stdlib.h>

char    *ft_strdup(char *src)
{
  int i = 0;
  char *result;
  while(src[i])
    i++;
  result = malloc(sizeof(char) * i + 1);
  if (!result)
    return 0;
  i = 0;
  while(src[i])
  {
    result[i] = src[i];
    i++;
  }
  if (src[i] == '\0')
  {
    result[i] = src[i];
  }
  return result;
}

#include <stdio.h>
#include <string.h>
int main ()
{
  printf("ori : %s:\n", strdup("\0"));
  printf("mine : %s:", ft_strdup("\0"));
}