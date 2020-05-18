#include "libft.h"

void	ft_lstdel(t_list **alist, void (*del)(void *, size_t))
{
	t_list *n_lst;
	t_list *tmp;

	n_lst = *alist;
	while (n_lst)
	{
		if (*del)
			(*del)(n_lst->content, n_lst->content_size);
		tmp = n_lst->next;
		free(n_lst);
		n_lst = tmp;
	}
	*alist = NULL;
}
