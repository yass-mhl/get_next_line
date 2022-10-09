#include "libft.h"


void	ft_putnbr_fd(int n, int fd)
{
  long nb;

  nb = n;
  if (nb > 2147483647 || nb < -2147483648)
        return;
  if (nb < 0)
  {
    nb *= - 1;
    ft_putchar_fd('-', fd);
  }
  if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + '0', fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}
