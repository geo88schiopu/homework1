#include "libft.h"

int	ft_iswhitespace(int c)
{
	//return (c == ' ' || c == '\t' || c == '\n');
	return (c == ' ' || (c >= 0x09 && c <= 0x0d));
}
