
#include "libft.h"

void	ft_lstadd(t_list **newnode, t_list *new)
{
	if (!new || !newnode)
		return ;
	if (*newnode)
		new->next = *newnode;
	*newnode = new;
}
