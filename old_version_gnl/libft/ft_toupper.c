#include "libft.h"

int ft_toupper(int c)
{
  if (c >= 'a' && c <= 'z')
    return (c - 32);
  return (c);
}

// int main(int ac, char **av)
// {
//   (void)ac;
//   printf("%c\n", ft_toupper(av[1][0]));
// }
