
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newnode;

	if (!lst || !f)
		return (NULL);
	if (lst->next)
	{
		newnode = ft_lstmap(lst->next, f);
		ft_lstadd(&newnode, f(lst));
	}
	else
		newnode = f(lst);
	return (newnode);
}
