#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
  int pgcd;
  if (argc == 3 && atoi(argv[1]) > 0 && atoi(argv[2]) > 0)
  {
    if (atoi(argv[1]) > atoi(argv[2]))
      pgcd = atoi(argv[2]);
    else
      pgcd = atoi(argv[1]);
    while(pgcd)
    {
      if (atoi(argv[1]) % pgcd == 0 && atoi(argv[2]) % pgcd == 0)
      {
        printf("%d", pgcd);
        break;
      }
      pgcd--;
    }
  }
  printf("\n");
  return 0;
}