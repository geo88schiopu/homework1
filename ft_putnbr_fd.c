#include "libft.h"

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0 && nb * -1 != nb)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb % 10 != nb)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 > 0 ? nb % 10 + '0' : nb % 10 * (-1) + '0', fd);
}
