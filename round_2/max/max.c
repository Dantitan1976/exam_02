/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 07:49:27 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/05 18:36:00 by dramirez         ###   ########.fr       */
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

int	main(void)
{
	int	nums[10] = {1, 5, 7, -80, 123, 42, -42, 66, 69, 10};
	int	num_max;
	int	pos;

	pos = 0;
	printf("Números: ");
	while (pos < 10)
	{
		printf(" %d; ", nums[pos]);
		pos++;
	}
	printf("\n");
	num_max = max(nums, 10);
	printf("Número máximo: %d\n", num_max);
	return (0);
}
