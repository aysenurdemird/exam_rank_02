#include <unistd.h>

int ft_atoi(char *str)
{
  int sign = 1;
  int result = 0;
  while(*str == ' ' ||(*str >= 9 && *str <= 13))
    str++;
  if (*str == '-')
    sign = -1;
  if (*str == '+' || *str == '-')
    str++;
  while(*str >= '0' && *str <= '9')
  {
    result = result * 10 + *str - '0';
    str++;
  }
  return (sign * result);
}

void ft_putnbr(int number)
{
  if (number > 9)
    ft_putnbr(number / 10);
  write(1, &"0123456789"[number % 10], 1);
}

int ft_is_prime(int number)
{
  int i = 2;
  while(i < number)
  {
    if (number % i == 0)
      return 0;
    i++;
  }
  return 1;
}

int ft_add_prime_sum(int number)
{
  int total = 0;
  while(number > 1)
  {
    if (ft_is_prime(number) == 1)
      total += number;
    number--;
  }
  return total;
}

int main (int argc, char **argv)
{
  if (argc == 2 && (ft_atoi(argv[1]) > 0))
  {
    ft_putnbr(ft_add_prime_sum(ft_atoi(argv[1])));
  }
  else
    write(1, "0", 1);
  write(1, "\n", 1);
  return 0;
}