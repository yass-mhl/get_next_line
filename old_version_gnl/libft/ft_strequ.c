#include "libft.h"

// int ft_strequ(char const *s1, char const *s2)
// {
//   int i;
//   int bool;
//   i = 0;
//   bool = 0;

//   while (s1[i] && s2[i] && s1[i] == s2[i])
//   {
//     i++;
//   }
//   bool = s1[i] - s2[i];

//   if (bool == 0)
//     return (1);
//   return (0);
// }

int ft_strequ(char const *s1, char const *s2)
{
  unsigned int i;
  i = 0;

  if (s1 == NULL || s2 == NULL || s1[i] == 0 || s2[i] == 0)
    return (0);
  while (s1[i] && s2[i])
  {
    if (s1[i] != s2[i])
      return (0);
    i++;
  }
  return (1);
}

// int main(void)
// {
// 	char *str1 = "hello";
// 	char *str2 = "";

// 	printf("%d", ft_strequ(str1, str2));
// 	return (0);
// }
