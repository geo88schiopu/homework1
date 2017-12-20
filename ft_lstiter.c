
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (!lst || !f)
		return ;
	f(lst);
	if (lst->next)
		ft_lstiter(lst->next, f);
}
