/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 20:37:24 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/13 20:45:43 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	pgcd(int a, int b)
{
	int	num;

	num = a;
	while (num > 0)
	{
		if (a % num == 0 && b % num == 0)
		{
			printf("%d", num);
			return ;
		}
		--num;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		pgcd(atoi(argv[1]), atoi(argv[2]));
	}
	printf("\n");
	return (0);
}
