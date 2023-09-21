unsigned int    lcm(unsigned int a, unsigned int b)
{
  int llcm;
  if (a == 0 || b == 0)
    return 0;
  if (a > b)
    llcm = a;
  else
    llcm = b;
  while(1)
  {
    if (llcm % a == 0 && llcm % b == 0)
      return llcm;
    llcm++;
  }
}