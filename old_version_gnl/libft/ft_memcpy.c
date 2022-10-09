#include "libft.h"

void  *ft_memcpy(void *dest, const void *src, size_t n)
{
  size_t i;

  i = 0;

  while (i < n)
  {
    ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
    i++;
  }
  return (dest);
}

// int main(void)
// {
// 	char src[50] = "mahmudulhasanjony";
// 	char dest[50];
// 	char *ret;

// 	ret = ft_memcpy(dest, src, 9);
// 	printf("%s", ret);
// 	return (0);
// }
