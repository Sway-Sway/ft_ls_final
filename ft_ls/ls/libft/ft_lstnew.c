#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!(new->content = (void *)malloc(content_size)))
		return (NULL);
	new = new->next;
	if (content == NULL)
	{
		new->content_size = 0;
		new->content = NULL;
	}
	else
	{
		new->content_size = content_size;
		ft_memcpy(new->content, content, content_size);
	}
	return (new);	
}
