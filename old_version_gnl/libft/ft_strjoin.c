#include "libft.h"

static char *fill_join(char const *s, char *tmp, unsigned int i)
{
  unsigned int y;
  y = 0;
  while(s[y])
  {
    tmp[i] = s[y];
    i++;
    y++;
  }
  return (tmp);
}

char *ft_strjoin(char const *s1, char const *s2)
{
  char *res;
  unsigned int i;
  int size;

  if (!s1 || !s2)
		return (NULL);
  size = ft_strlen(s1) + ft_strlen(s2);
  res = (char *)malloc(sizeof(char) * (size + 1));
  if (!res)
    return (NULL);
  i = 0;
  res = fill_join(s1, res, i);
  res = fill_join(s2, res, ft_strlen(s1));
  res[size + 1] = 0;
  return (res);
}

// int main(int ac, char **av)
// {
//   (void)ac;
//   printf("%s", ft_strjoin(av[1], av[2]));
//   return (0);
// }
