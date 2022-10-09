#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
  int i;
  int len;
  len = 0;
  i = 0;
  while (dest[len])
    len++;
  while (src[i])
  {
    dest[len + i] = src[i];
    i++;
  }
  dest[len + i] = 0;
  return (dest);
}

// int main(int ac, char **av)
// {
//   (void)ac;
//   printf("Source : %s\n", av[1]);
//   printf("Destination : %s\n", av[2]);
//   printf("Résultat : %s", ft_strcat(av[2], av[1]));
// }
