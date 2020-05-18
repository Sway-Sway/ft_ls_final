#include "libft.h"

void	ft_lstadd(t_list **alist, t_list *new)
{
	t_list *elem;

	elem = new;
	elem->next = *alist;
	*alist = new;
}
