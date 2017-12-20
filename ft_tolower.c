
#include "libft.h"

int		ft_tolower(int c)
{
	c += ft_isupper(c) ? 32 : 0;
	return (c);
}
