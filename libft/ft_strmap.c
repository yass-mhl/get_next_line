#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
  int len;
  char *res;
  int i;

  len = 0;
  while(s[len])
    len++;

  res = (char *)malloc(sizeof(char) * (len + 1));
  if(!res)
    return (NULL);
    i = 0;
  while (s[i])
  {
    res[i] = f(s[i]);
    i++;
  }
  res[i] = 0;
  return (res);
}
