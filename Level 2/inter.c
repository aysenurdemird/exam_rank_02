#include <unistd.h>

int check(char *str, char c, int len)
{
  int i = 0;
  while(i < len || len == -1)
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
    {
      j = 0;
      while(argv[2][j])
      {
        if (argv[1][i] == argv[2][j] && check(argv[1], argv[1][i], i) == 1) {
          write(1, &argv[1][i], 1);
          break ;
        }
        j++;
      }
      i++;
    }
  }
  write(1, "\n", 1);
  return 0;
}