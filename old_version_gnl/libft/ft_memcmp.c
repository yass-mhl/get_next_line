#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  // compare les n premiers octects de la zone memoire de s1 et s2
  size_t i;
  unsigned char *str1;
  unsigned char *str2;

  str1 = (unsigned char *)s1;
  str2 = (unsigned char *)s2;
  i = 0;

  while (str1[i] == str2[i] && i < n)
  {
    i++;
  }
  return (str1[i] - str2[i]);
}

// int main(void)
// {
// 	char str1[50] = "testtttt salut";
// 	char str2[50] = "testtttt akhyy";
// 	int n = 14;
//   printf("vrai memcmp : %d\n", memcmp(str1, str2, n));
// 	printf("Mon ft_memcmp : %d", ft_memcmp(str1, str2, n));
// 	return (0);
// }
