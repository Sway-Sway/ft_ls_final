#include "libft.h"

void	ft_listiter_data(t_list *lst, void *data, void (*f)(t_list *elem, void *data))
{
	t_list *n_lst;

	n_lst = lst;
	while (n_lst)
	{
		(*f)(n_lst, data);
		n_lst = n_lst->next;
	}
}
