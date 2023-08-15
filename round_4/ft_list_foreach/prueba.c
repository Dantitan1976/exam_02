#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_list
{
	void			*data;
	struct s_list	*next;
}				t_list;

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = (t_list *)malloc(sizeof(t_list));
	if (!nodo)
		return (NULL);
	nodo->data = content;
	nodo->next = NULL;
	return (nodo);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

void	ft_print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)lst->data);
		lst = lst->next;
	}
	printf("\n");
}

void	ft_upper_a(void *data)
{
	char	*str;
	char	*new_str;

	str = (char *)data;
	new_str = strdup(str);
	if (new_str)
	{
		new_str[0] = 'A';
		printf("%s\n", new_str);
		free(new_str);
	}
}

int	main(void)
{
	t_list	*new_list = NULL;
	t_list	*nodo;

	new_list = ft_lstnew(strdup("Qué pasha?"));
	nodo = ft_lstnew(strdup("Preparando el examen"));
	ft_lstadd_front(&new_list, nodo);
	nodo = ft_lstnew(strdup("Fo! Po no te quea na"));
	printf("Lista inicial: \n");
	ft_print_list(new_list);
	ft_list_foreach(new_list, ft_upper_a);
	printf("Lista nueva: \n");
	ft_print_list(new_list);

	// Libera memoria de la lista
	t_list *current = new_list;
	while (current)
	{
		t_list *next = current->next;
		free(current->data);
		free(current);
		current = next;
	}

	return (0);
}
