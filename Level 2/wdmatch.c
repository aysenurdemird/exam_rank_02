#include <unistd.h>

int main (int argc, char **argv)
{
  int i = 0;int j = 0;int k = 0;
  if (argc == 3)
  {
    while(argv[2][j])
    {
      if(argv[1][i] == argv[2][j])
      {
        i++;        
      }
      j++;
    }
    if (!argv[1][i])
    {
      while(argv[1][k])
      {
        write(1, &argv[1][k], 1);
        k++;
      }
    }
  }
  write(1, "\n", 1);
  return 0;
}