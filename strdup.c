#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t	len;
	char	*news;

	len = ft_strlen(s);
	news = (char *)malloc(sizeof(char) * (len+1));
	if (news == NULL)
		return (NULL);
	news[len] = '\0';
	while (len > 0)
	{
		len--;
		news[len] = s[len];
	}
	return (news);
}
