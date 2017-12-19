#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int	i;

	i = 0;
	if (s == '\0')
		return (NULL);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	while ((s[start] != '\0') && len)
	{
		len--;
		str[i] = s[start];
		start++;
		i++;
	}
	return (str);
}
