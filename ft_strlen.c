#include <stddef.h>

size_t	ft_strlen(char *s)
{
	size_t len;

	len = 0;	
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
