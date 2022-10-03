#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
  int i;
  i = 0;

  while (s1[i] == s2[i] && s1[i] && s2[i])
    i++;
  return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char *s1;
// 	char *s2;
// 	int ret;

// 	s1 = "test\200";
// 	s2 = "test\0";
// 	ret = ft_strcmp(s1, s2);
// 	printf("%d", ret);
// 	return (0);
// }
