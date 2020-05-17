#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *head;

	head = *alst;
	while (head != NULL)
	{
		del(head->content, head->content_size);
		free(head);
		head = head->next;
	}
	*alst = NULL;
}
