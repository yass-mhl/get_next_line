#include "libft.h"

char *ft_strdup(const char *s)
{
  char *tab;
  int len;
  int i;

  i = 0;
  len = 0;

  while (s[len])
    len++;
  tab = (char *)malloc(sizeof(*s) * (len + 1));
  if (!tab)
    return (NULL);
  while (s[i])
  {
    tab[i] = s[i];
    i++;
  }
  tab[i] = 0;
  return (tab);
}

// int main(void)
// {
// 	char *str;

// 	str = "mahmudul";
// 	printf("Before Allocation: %s\n", str);
// 	printf("After  Allocation: ");
// 	printf("%s\n", ft_strdup(str));
// 	return (0);
// }
