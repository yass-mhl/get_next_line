#include "libft.h"

void  ft_strclr(char *s)
{
  int i;

  i = 0;
  while (s[i])
  {
    s[i] = 0;
    i++;
  }
  s[i] = 0;
}

// int main(void)
// {
//     char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};

//     printf("Avant : %s\n", str);
//     ft_strclr(str);
//     printf("Après : %s", str);
//     return (0);
// }
