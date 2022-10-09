#include "libft.h"

char *ft_strchr(const char *s, int c)
{
  while(*s)
  {
    if (*s == c)
      return ((char *)s);
    s++;
  }
  if (c == 0)
	{
		return ((char *)s);
	}
	return (0);
}

// int main()
// {
// 	char str[] = "http://www.tutorialspoint.com";
// 	char ch = '.';
// 	char *ret;

// 	ret = ft_strchr(str, ch);
// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	return (0);
// }
