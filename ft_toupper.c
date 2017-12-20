
#include "libft.h"

int		ft_toupper(int c)
{
	int ret;
	
	ret = c;
	ret = ret - ft_islower(c) ? 32 : 0;
	return (ret);
}
