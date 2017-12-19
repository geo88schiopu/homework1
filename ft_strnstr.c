#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t bigi;
	size_t littlei;

	if (*little == '\0')
		return ((char*)big);
	bigi = 0;
	while (big[bigi])
	{
		littlei = 0;
		while ((big[bigi + littlei] == little[littlei]) && ((bigi + littlei) < size))
		{
			littlei++;
			if (little[littlei] == '\0')
				return ((char*)big + bigi);
		}
		 bigi++;
	}
	return (NULL);
}
