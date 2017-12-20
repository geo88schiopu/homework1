
#include "libft.h"

static int	make_chars(int n)
{
	int c;

	c = (n < 0) ? 2 : 1;
	while (n && (n /= 10))
		c++;
	return (c);
}

char	*ft_strrev(char *str)
{
	char	*p1;
	char	*p2;
	char	temp;

	if (!str || !*str)
		return (str);
	p1 = str;
	p2 = str + ft_strlen(str) - 1;
	while (p2 > p1)
	{
		temp = *p2;
		*p2 = *p1;
		*p1 = temp;
		++p1;
		--p2;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char	*ret;
	int		neg;
	int		index;

	index = 0;
	ret = ft_strnew(make_chars(n));
	if (!ret)
		return (NULL);
	neg = (n < 0) ? 1 : 0;
	while (n)
	{
		ret[index++] = (n % 10 > 0) ? (n % 10 + '0') : (n % 10 * (-1) + '0');
		n /= 10;
	}
	if (neg)
		ret[index++] = '-';
	if (ret[0] == 0)
		ret[0] = '0';
	return (ft_strrev(ret));
}
