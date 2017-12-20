
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !*alst)
		return;
	if ((*alst)->next)
		//free(alst->content);
		ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(alst, del);
}