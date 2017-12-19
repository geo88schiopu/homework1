#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (f != NULL)
	{
		while (s[i] != '\0')
		{
			str[i] = f(i, s[i]);
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
