/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:56:05 by dramirez          #+#    #+#             */
/*   Updated: 2023/07/14 21:31:48 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr(int n)
{
	int	dec;
	int	units;

	if (n > 10)
	{
		dec = n / 10 + '0';
		units = n % 10 + '0';
		write(1, &dec, 1);
		write(1, &units, 1);
	}
	else
	{
		units = n + '0';
		write (1, &units, 1);
	}
	return (n);
}

int	main(void)
{
	int	num;

	num = 1;
	while (num <= 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (num % 3 == 0)
			write(1, "fizz", 4);
		else if (num % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(num);
		write (1, "\n", 1);
		num++;
	}
}
