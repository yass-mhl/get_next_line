#include "libft.h"

int ft_isascii(int c)
{
//   unsigned int	u;

// 	u = (unsigned int)c;

//   if (u >= 0 && u <= 127)
//     return (1);
//   return (0);
  return (c >= 0 && c <= 127);
}

// int main(void)
// {
// 	char c = '±';
// 	printf("%d", ft_isascii(c));
// 	return (0);
// }
