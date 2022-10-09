#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
  size_t i;
  size_t j;
  size_t total;

  i = 0;
  j = 0;
  total = 0;
  while (dest[i])
		i++;
  while(src[total])
    total++;
  if (i >= size)
    total += size;
  else
    total += i;

  while (src[j] && i + 1 < size)
  {
    dest[i] = src[j];
    i++;
    j++;
  }
  dest[i] = 0;
  return (total);
}

// int main()
// {
// 	char s1[10] = "hello";
// 	//char s2[20] = "gchijklmnopqr";
// 	//int ret;
// 	//int len = 11;

// 	printf("%zu", ft_strlcat(s1, "cat", 0));
// 	return (0);
// }
