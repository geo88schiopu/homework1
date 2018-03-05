#include "libft.h"
//just one comment
int	get_return(unsigned long long ret, int neg, const char *newp)
{
	int count;

	count = 0;
	while (*newp <= '1' || *newp >= '9')
		newp++;
	while (ft_isdigit(*(newp + count)))
		count++;
	if (count >= 19)
		return (neg == -1 ? 0 : -1);
	if (ret > 9223372036854775807)
		return (neg == -1 ? 0 : -1);
	else
		return (ret * neg);
}

int	ft_atoi(const char *newp)
{
	unsigned long long	ret;
	int					len;
	int					x;
	int					neg;

	neg = 1;
	x = -1;
	len = 0;
	ret = 0;
	while (ft_iswhitespace(*newp))
		newp++;
	while (newp[len])
		len++;
	while (++x <= len)
	{
		if (ft_isdigit(newp[x]))
			ret = (ret * 10) + (newp[x] - '0');
		else if (x == 0 && (newp[x] == '-' || newp[x] == '+'))
			neg = newp[x] == '-' ? -1 : 1;
		else
			return (get_return(ret, neg, newp));
	}
	return (get_return(ret, neg, newp));
}
