#include "libft.h"

void  *ft_memmove(void *dest, const void *src, size_t n)
{
  size_t  i;
  unsigned char tmp;
  i = 0;

  while (i < n)
  {
    tmp = ((unsigned char *)src)[i];
    ((unsigned char *)dest)[i] = tmp;
    i++;
  }
  return (dest);
}
