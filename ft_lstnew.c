#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{	
	t_list *head;

	head = NULL;
	head = malloc(sizeof(t_list)); 	
	if (head == NULL)
		return (NULL);
	if (content == NULL)
	{
		head->content = NULL;
		head->content_size = 0;
	}
	else
	{
		head->content = malloc(sizeof(content_size));
		if (head->content == NULL)
			return (NULL);
		ft_memcpy(head->content, content, content_size);
		head->content_size = content_size;
	}
	head->next = NULL;
	return (head);
}
