/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 09:07:09 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/13 12:13:22 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int	num_elem;

	num_elem = 0;
	while (begin_list)
	{
		num_elem++;
		begin_list = begin_list -> next;
	}
	return (num_elem);
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

int	main(void)
{
	t_list	*p;
	t_list	*s;
	t_list	*j;
	t_list	*t;
	t_list	*o;

	p = ft_lstnew("one");
	s = ft_lstnew("two");
	j = ft_lstnew("three");
	t = ft_lstnew("four");
	o = ft_lstnew("five");
	p->next = s;
	s->next = j;
	j->next = t;
	t->next = o;
	o->next = NULL;
	printf("El tamaño de la lista es: %d\n", ft_list_size(p));
	return (0);
}
