#include <unistd.h>

void ft_putnbr(int number)
{
  if (number > 9)
    ft_putnbr(number / 10);
  write(1, &"0123456789"[number % 10], 1);
}