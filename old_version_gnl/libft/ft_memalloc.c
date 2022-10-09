#include "libft.h"

void  *ft_memalloc(size_t size)
{
  unsigned char *ptr;
  ptr = malloc(size);
  if (!ptr)
    return (NULL);
  ft_memset(ptr, 0, size);
  return (ptr);
}

// int main(void)
// {
//     int size;

//     size = 3;
//     ft_memalloc(3);
//     return (0);
// }
