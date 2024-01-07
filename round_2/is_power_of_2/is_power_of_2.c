/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:31:35 by dramirez          #+#    #+#             */
/*   Updated: 2024/01/07 17:38:10 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n = n / 2;
	if (n == 1)
		return (1);
	else
		return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("El número %s es potencia de 2?\n", argv[1]);
		printf("1 = Sí, 0 = No: %d\n", is_power_of_2(atoi(argv[1])));
	}
	return (0);
}*/
