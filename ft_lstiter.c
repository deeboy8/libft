#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *p;

	p = lst;
	f(p);
	if (p->next != NULL)
		ft_lstiter(p->next, f);
}
