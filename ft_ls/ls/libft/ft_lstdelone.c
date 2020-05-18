#include "libft.h"

void	ft_lstdelone(t_list **alist, void (*del)(void *, size_t))
{
	if (alist)
	{
		if (*alist)
		{
			(*del)((**alist).content, (**alist).content_size);
			free(*alist);
		}
		*alist = NULL;
	}
}
