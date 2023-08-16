/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:36:50 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/16 20:04:40 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	pos;
	int		aux;

	pos = 0;
	while (pos < (size - 1))
	{
		if (tab[pos] > tab[pos + 1])
		{
			aux = tab[pos];
			tab[pos] = tab[pos + 1];
			tab[pos + 1] = aux;
			pos = 0;
		}
		else
			pos++;
	}
}

int	main (int argc, char **argv)
{
	int	pos;
	int	size;
	int	*tab;

	size = argc - 1;
	if (argc >= 2)
	{
		tab = malloc(size * sizeof(int));
		if (!tab)
			return (0);
		pos = 0;
		printf("Cadena original: ");
		while (pos < size)
		{
			tab[pos] = atoi(argv[pos + 1]);
			printf("%d ", tab[pos]);
			pos++;
		}
		printf("\n");
		sort_int_tab(tab, size);
		printf("Cadena ordenada: ");
		pos = 0;
		while (pos < size)
		{
			printf("%d ", tab[pos]);
			pos++;
		}
		free (tab);
	}
	printf("\n");
	return (0);
}
