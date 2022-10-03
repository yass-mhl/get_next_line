#include "libft.h"

int ft_isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);
  return (0);
}

// int main(int ac, char **av)
// {
//   (void)ac;
//   printf("%d\n", ft_isalpha(av[1][0]));
// }
