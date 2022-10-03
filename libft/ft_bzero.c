#include "libft.h"

void  ft_bzero(void *s, size_t n)
{
  size_t i;

  i = 0;
  while (i < n)
  {
    ((unsigned char *)s)[i] = 0;
    i++;
  }
}

// int main(void)
// {
// 	char str[50];
// 	strcpy(str, "This is string.h library function");
// 	puts(str);
// 	ft_bzero(str, 2);
// 	puts(str);
// 	return (0);
// }
