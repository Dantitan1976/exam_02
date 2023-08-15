/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:00:16 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/15 19:34:04 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list -> data);
		begin_list = begin_list -> next;
	}
}

void	print_data(void *data)
{
	printf("%s\n", (char *)data);
}

int	main(void)
{
	t_list	*test_list;

	test_list = malloc(sizeof(t_list));
	test_list -> data = "Manolo: Killo qué ase?";
	test_list -> next = malloc(sizeof(t_list));
	test_list -> next -> data = "Paco: Preparando el examen";
	test_list -> next -> next = malloc(sizeof(t_list));
	test_list -> next -> next -> data = "Manolo: Fo, valiente mierda...";
	test_list -> next -> next -> next = NULL;
	ft_list_foreach(test_list, print_data);
	return (0);
}
