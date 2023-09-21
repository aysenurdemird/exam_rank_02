int ft_strcmp(char *s1, char *s2) {
  int i = 0;
  while (s1[i] && s2[i] && s1[i] == s2[i])
    i++;
  if ((s1[i] - s2[i]) > 0)
    return 1;
  else if ((s1[i] - s2[i]) < 0)
    return -1;
  else
    return 0;
}
