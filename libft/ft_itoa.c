#include "libft.h"

static int calcul_len(long n)
{
  int len;

  len = 0;
  if (n < 0)
  {
    n *= -1;
    len++;
  }
  if (n == 0)
    return (len + 1);
  while (n > 0)
  {
    n /= 10;
    len++;
  }
  return (len);
}

char *ft_itoa(int n)
{
  int len;
  long nbr;
  char *res;

  nbr = n;
  len = calcul_len(nbr);
  res = (char *)malloc(sizeof(char) * len + 1);
  if (!res)
    return (NULL);
  res[len] = 0;
  len--;
  if (nbr == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = nbr * -1;
	}
  while (nbr > 0)
	{
		res[len--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (res);
}

// int main(int ac, char **av)
// {
//   (void)ac;
//   printf("%s", ft_itoa(atoi(av[1])));
// }
