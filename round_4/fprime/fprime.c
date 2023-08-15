/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:32:41 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/14 21:55:45 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	is_prime(int n)
{
	int	num;

	num = 2;
	if (n <= 0)
		return (0);
	while (num <= (n / 2))
	{
		if (n % num == 0)
			return (0);
		num++;
	}
	return (1);
}

void	fprime(char *str)
{
	int	num;
	int	factor;

	num = atoi(str);
	if (num < 1)
		return ;
	if (is_prime(num))
		printf("%i", num);
	else
	{
		factor = 2;
		while (!is_prime(num))
		{
			while (num % factor == 0)
			{
				printf("%i*", factor);
				num = num / factor;
			}
			factor++;
			while (!is_prime(factor))
				factor++;
		}
		printf("%i", num);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(argv[1]);
	printf("\n");
	return (0);
}
