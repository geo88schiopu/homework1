#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t i;
	char *pos;

	i = 0;
	pos = (char *)malloc(sizeof(char) * size);
	if (pos == NULL)
		return (NULL);
	while (i < size)
	{
		pos[i] = '\0';
		i++;
	}
	return (pos);
}
