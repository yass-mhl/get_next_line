#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
  char *res;
  size_t i;

  res = ft_memalloc(len + 1);
  if (!res)
    return (NULL);
  i = 0;
  while (i < len)
  {
    res[i] = s[start];
    i++;
    start++;
  }
  res[i] = 0;

  return (res);
}

// int main(void)
// {
// 	char *str1 = "lorem ispusm dolor sit amet";
// 	unsigned int start = 7;
// 	int len = 10;

// 	printf("%s", ft_strsub(str1, start, len));
// 	return (0);
// }
