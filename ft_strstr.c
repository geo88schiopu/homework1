#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t bigi;
	size_t littlei;

	if (*little == '\0')
		return ((char*)big);
	bigi = 0;
	while (big[bigi])
	{
		littlei = 0;
		while (big[bigi + littlei] == little[littlei])
		{
			littlei++;
			if (little[littlei] == '\0')
				return ((char*)big + bigi);
		}
		 bigi++;
	}
	return (NULL);
}
