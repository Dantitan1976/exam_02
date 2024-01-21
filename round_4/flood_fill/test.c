/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:21:01 by dramirez          #+#    #+#             */
/*   Updated: 2024/01/21 19:21:01 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

char	**make_area(char **zone, t_point size)
{
	char	**new;
	int		i;
	int		j;

	new = malloc(sizeof(char *) * size.y);
	i = 0;
	while (i < size.y)
	{
		new[i] = malloc(size.x + 1);
		j = 0;
		while (j < size.x)
		{
			new[i][j] = zone[i][j];
			++j;
		}
		new[i][size.x] = '\0';
		++i;
	}
	return (new);
}

int	main(void)
{
	t_point	size = {8, 5};
	char	*zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110000",
		"11111100",
	};

	char	**area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");
	t_point	begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
