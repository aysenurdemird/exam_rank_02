char    *ft_strcpy(char *s1, char *s2)
{
  int i = 0;
  while(s2[i])
  {
    s1[i] = s2[i];
    i++;
  } 
  s1[i] = 0;
  return s1;
}

#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "selena";
  char strr[] = "hades";
  printf("ori : %s\n", strcpy(str, strr));

  char str1[] = "selena";
  char strr1[] = "hades";
  printf("mine : %s", ft_strcpy(str1, strr1));
}
