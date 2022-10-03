#include "libft.h"

void	ft_putnbr(int n)
{
  long nb;

  nb = n;
  if (nb > 2147483647 || nb < -2147483648)
        return;
  if (nb < 0)
  {
    nb *= - 1;
    ft_putchar('-');
  }
  if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else
		ft_putchar(nb + '0');
}

// int main(int ac, char **av)
// {
//   (void)ac;
//   ft_putnbr(atoi(av[1]));
// }
