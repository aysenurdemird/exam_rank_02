int		max(int* tab, unsigned int len)
{
  unsigned int i = 0;
  int max = tab[0];
  if (len == 0)
    return 0;
  while(len > 0 && i < len)
  {
    if(tab[i] > max)
    {
      max = tab[i];
    }
    i++;
  }
  return max;
}