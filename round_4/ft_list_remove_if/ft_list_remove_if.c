/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:40:18 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/20 13:01:06 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*nodo;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	nodo = *begin_list;
	if (cmp(data_ref, nodo->data) == 0)
	{
		*begin_list = nodo->next;
		free(nodo);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	nodo = *begin_list;
	ft_list_remove_if(&nodo->next, data_ref, cmp);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	while ((s1[pos] == s2[pos]) && (s1[pos] != '\0' && s2[pos] != '\0'))
		pos++;
	return (s1[pos] - s2[pos]);
}

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list != NULL)
	{
		f(begin_list -> data);
		begin_list = begin_list -> next;
	}
}

t_list	*ft_new_elem(void *data)
{
	t_list	*nodo;

	nodo = (t_list *)malloc(sizeof(t_list));
	if (!nodo)
		return (NULL);
	nodo -> data = data;
	nodo -> next = NULL;
	return (nodo);
}

int	main(void)
{
	t_list	*test_list;
	t_list	**begin_list;

	begin_list = &test_list;
	test_list = ft_new_elem("Hola ");
	test_list -> next = ft_new_elem("Mundo...");
	test_list -> next -> next = ft_new_elem("!");
	test_list -> next -> next -> next = ft_new_elem("!");
	ft_list_foreach(test_list, (void *)ft_putstr);
	ft_putstr("\n");
	ft_list_remove_if(begin_list, "Malota", ft_strcmp);
	ft_putstr("Eliminando (o)\n");
	ft_list_foreach(test_list, (void *)ft_putstr);
	ft_putstr("\n");
}
