#include <unistd.h>

void ft_putnbr(int number)
{
  if (number > 9)
    ft_putnbr(number / 10);
  write(1, &"0123456789"[number % 10], 1);
}

int ft_atoi(char *str)
{
  int sign = 1;
  int result = 0;
  while (*str == ' ' || (*str >= 9 && *str <= 13))
    str++;
  if (*str == '-')
    sign = -1;
  if (*str == '-' ||*str == '+')
    str++;
  while(*str >= '0' && *str <= '9')
  {
    result = result * 10 + *str - '0';
    str++;
  }
  return (sign * result);
}

int main (int argc, char **argv)
{
  int i = 1;
  if (argc > 1)
  {
    while(i <= 9)
    {
      ft_putnbr(i);
      write(1, " x ", 3);
      ft_putnbr(ft_atoi(argv[1]));
      write(1, " = ", 3);
      ft_putnbr(i * ft_atoi(argv[1]));
      write(1, "\n", 1);
      i++;
    }
  }
  else
    write(1, "\n", 1);
  return 0;
}