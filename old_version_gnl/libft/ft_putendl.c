#include "libft.h"

void ft_putendl(char const *s)
{

  if (!s)
    return ;
  while(*s)
    write(1, s++, 1);
  write(1, "\n", 1);
}

// int main(int ac, char **av)
// {
//   (void)ac;
//   ft_putendl(av[1]);
// }
