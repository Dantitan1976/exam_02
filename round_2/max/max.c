/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 07:49:27 by dramirez          #+#    #+#             */
/*   Updated: 2024/01/07 18:44:33 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	pos;
	int				max_val;

	if (len == 0)
		return (0);
	else
	{
		pos = 0;
		max_val = tab[pos];
		while (pos < len)
		{
			if (tab[pos] > max_val)
				max_val = tab[pos];
			pos++;
		}
	}
	return (max_val);
}

/*int	main(int argc, char **argv)
{
	int				max_val;
	unsigned int	len;
	int				*tab;
	unsigned int	pos;

	if (argc >= 2)
	{
		len = argc - 1;
		tab = (int *)malloc(len * sizeof(int));
		pos = 0;
		while (pos < len)
		{
			tab[pos] = atoi(argv[pos + 1]);
			pos++;
		}
		max_val = max(tab, len);
		printf("El valor máximo es: %d\n", max_val);
		free(tab);
	}
	return (0);
}*/
