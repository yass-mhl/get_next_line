#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
  size_t i;
  i = 0;

  while (i < n && src[i])
  {
    dest[i] = src[i];
    i++;
  }
  while(i < n)
  {
    dest[i] = 0;
    i++;
  }
  return (dest);
}

// int main()
// {
// 	char src[] = "jony";
// 	char dest[] = "mahmudul";

// 	printf("%s\n", ft_strncpy(dest, src, 7));
// 	return (0);
// }
