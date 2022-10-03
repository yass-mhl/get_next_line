#include "libft.h"

char *ft_strcpy(char *dest, const char *src)
{
  int i;
  i = 0;

  while (src[i])
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = 0;
  return (dest);
}

// int main(void)
// {
// 	char src[50], dest[50];

// 	strcpy(src, "This is source");
// 	strcpy(dest, "This is destination");

// 	ft_strcpy(dest, src);
// 	printf("%s\n%s", src, dest);
// 	return (0);
// }
