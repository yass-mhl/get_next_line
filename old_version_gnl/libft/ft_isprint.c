#include "libft.h"

int ft_isprint(int c)
{
  return (c >= 32 && c <= 126);
}


// int main(int ac, char **av)
// {
//   (void)ac;
//   printf("%d\n", ft_isprint(av[1][0]));
// }
