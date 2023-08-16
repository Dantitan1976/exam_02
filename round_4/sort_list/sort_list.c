/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:17:32 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/16 22:27:27 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		aux;
	t_list	*nodo;

	nodo = lst;
	while (lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			aux = lst->data;
			lst->data = lst->next->data;
			lst->next->data = aux;
			lst = nodo;
		}
		else
			lst = lst->next;
	}
	lst = nodo;
	return (lst);
}

int	ascending(int a, int b)
{
	return (a <= b);
}

t_list	*add_int(t_list *list, int nb)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->data = nb;
	new->next = list;
	return (new);
}

/*int	main(void)
{
	t_list	*list;

	list = NULL;
	list = add_int(list, 9);
	list = add_int(list, 3);
	list = add_int(list, 2);
	list = add_int(list, 4);
	list = add_int(list, 1);
	list = sort_list(list, &ascending);

	while (list != NULL)
	{
		printf("%d\n", list->data);
		list = list->next;
	}
	return (0);
}*/

int	main(int argc, char **argv)
{
	t_list	*current;
	t_list	*list;
	int		i;

	list = NULL;
	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			list = add_int(list, atoi(argv[i]));
			i++;
		}
		printf("Original list: ");
		current = list;
		while (current)
		{
			printf("%d ", current->data);
			current = current->next;
		}
		printf("\n");
		list = sort_list(list, ascending);
		printf("Sorted list: ");
		current = list;
		while (current)
		{
			printf("%d ", current->data);
			current = current->next;
		}
	}
	printf("\n");
	while (list)
	{
		list = list->next;
		free(list);
	}
	return (0);
}
