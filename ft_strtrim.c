#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	first;
	size_t	last;
	size_t	len;

	if (!s)
		return (NULL);
	first = 0;
	while (s[first] != '\0'
			&& (s[first] == ' ' || s[first] == '\n' || s[first] == '\t'))
		first++;
	last = ft_strlen(s);
	while (first < last
			&& (s[last - 1] == ' ' || s[last - 1] == '\n' || s[last - 1] == '\t'))
		last--;
	if (first == last)
		return (ft_strnew(1));
	len = last - first;
	return (ft_strsub(s, first, len));
}
