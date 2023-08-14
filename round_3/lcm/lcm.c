/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:49:59 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/13 20:19:06 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	res;

	if (a == 0 || b == 0)
		return (0);
	if (a < b)
		res = b;
	else
		res = a;
	while (res % a != 0 || res % b != 0)
		res++;
	return (res);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("m.c.m. entre %s y %s es: ", argv[1], argv[2]);
		printf("%d\n", lcm(atoi(argv[1]), atoi(argv[2])));
	}
	return (0);
}
