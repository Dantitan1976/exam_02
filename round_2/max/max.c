/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 07:49:27 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/05 11:11:19 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	pos;
	int				max_val;

	if (len == 0)
		max_val = 0;
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

/*int	main(void)
{
	int	nums[10] = {1, 5, 7, -80, 123, 42, -42, 66, 69, 10};
	int	num_max;

	num_max = max(nums, 10);
	printf("Número máximo: %d\n", num_max);
	return (0);
}*/

int	main(int argc, char **argv)
{
	int	*nums;
	int	pos;
	
	if (argc < 3)
		return (0);
	nums = malloc(sizeof(int) * (argc - 1));
	{
		printf("Números: %s\n", argv[pos]);
	}
		num_max = max(
