#include "libft.h"

void  *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
  size_t  i;
  i = 0;

  while (i < n)
  {
    ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
    if(((unsigned char *)src)[i] == (unsigned char)c)
      return (dest + i + 1);
    i++;
  }
  return (NULL);
}


// int main(void)
// {
// 	char src[50] = "mahmudulhasanjony";
// 	char dest[50];
// 	char c = 'n';

// 	ft_memccpy(dest, src, c, 25);
// 	printf("%s", dest);
// 	return (0);
// }
