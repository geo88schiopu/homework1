#include "libft.h"
#include <stdlib.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t len1;
	size_t len2;
	size_t i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	while ((i < len2) & (i < n))
	{
		s1[len1 + i] = s2[i];
		i++;
	}	
	s1[len1 + i] = '\0';
	return (s1);
}
