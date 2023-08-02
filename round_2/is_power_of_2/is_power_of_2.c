/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:31:35 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/02 22:43:38 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (n % 2 == 0)
			n = n /2;
		else
			return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("El número %s es potencia de 2?\n", argv[1]);
		printf("1 = Sí, 0 = No: %d\n", is_power_of_2(atoi(argv[1])));
	}
	return (0);
}
