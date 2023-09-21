#include <unistd.h>

int check (char *str, char c, int len)
{
  int i = 0;
  while(i < len)
  {
    if (str[i] == c)
      return 0;
    i++;
  }
  return 1;
}

int main (int argc, char **argv)
{
  int i = 0;
  int j = 0;
  if (argc == 3)
  {
    while(argv[1][i])
      i++;
    while(argv[2][j])
    {
      argv[1][i] = argv[2][j];
      j++;
      i++;
    }
    argv[1][i] = '\0';
    i = 0;
    while(argv[1][i])
    {
      if (check(argv[1], argv[1][i], i) == 1)
        write(1, &argv[1][i], 1);
      i++;
    }
  }
  write(1, "\n", 1);
  return 0;
}