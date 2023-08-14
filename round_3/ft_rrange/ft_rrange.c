/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:46:44 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/13 19:04:44 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	pos;
	int	*num;
	int	size;

	size = abs(end - start) + 1;
	num = malloc(size * sizeof(int));
	if (!num)
		return (NULL);
	pos = 0;
	if (start < end)
	{
		while (start <= end)
			num[pos++] = end--;
	}
	else
	{
		while (start >= end)
			num[pos++] = end++;
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
		cad = ft_rrange(atoi(argv[1]), atoi(argv[2]));
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
