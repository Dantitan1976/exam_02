/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:17:01 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/19 18:38:54 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	*ft_range(int start, int end)
{
	int	pos;
	int	*num;
	int	size;

	if (end - start < 0)
		size = ((end - start) * -1) + 1;
	else
		size = (end - start) + 1;
	num = malloc(size * sizeof(int));
	if (!num)
		return (NULL);
	pos = 0;
	if (start < end)
	{
		while (start <= end)
			num[pos++] = start++;
	}
	else
	{
		while (start >= end)
			num[pos++] = start--;
	}
	return (num);
}

int	main(int argc, char **argv)
{
	int	cad_long;
	int	*cad;
	int	pos;

	if (argc == 3)
	{
		cad_long = abs(atoi(argv[2]) - atoi(argv[1]));
		cad = ft_range(atoi(argv[1]), atoi(argv[2]));
		pos = 0;
		while (pos <= cad_long)
		{
			printf("%d\n", cad[pos]);
			pos++;
		}
	}
	free(cad);
	return (0);
}
