#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
  char new;

  new = '\n';
  if (!s)
    return ;
  while (*s)
    write(fd, s++, 1);
  write(fd, &new, 1);
}
