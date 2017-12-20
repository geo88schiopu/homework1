
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	if (!content)
	{
		newnode->content = (void *)content;
		newnode->content_size = 0;
	}
	else
	{
		newnode->content = (void *)malloc(content_size);
		if (!newnode->content)
			return (NULL);
		ft_memcpy(newnode->content, content, content_size);
		newnode->content_size = content_size;
	}
	newnode->next = NULL;
	return (newnode);
}
