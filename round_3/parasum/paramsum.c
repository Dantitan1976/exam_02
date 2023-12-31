/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 20:23:25 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/15 18:59:00 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	num;

	if (n > 9)
	{
		ft_putnbr(n / 10);
		num = (n % 10) + '0';
		write (1, &num, 1);
	}
	else
	{
		num = n + '0';
		write (1, &num, 1);
	}
}

int	main(int argc, char **argv)
{
	(void)argv;
	ft_putnbr(argc - 1);
	write (1, "\n", 1);
	return (0);
}
