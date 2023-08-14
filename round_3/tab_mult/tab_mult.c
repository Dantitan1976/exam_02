/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:43:07 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/14 19:08:34 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	num;
	int	pos;

	pos = 0;
	num = 0;
	while (str[pos])
	{
		num = (num * 10) + (str[pos] - '0');
		pos++;
	}
	return (num);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

void	tab_mult(char *str)
{
	int	num;
	int	pos;

	num = ft_atoi(str);
	pos = 1;
	while (pos <= 9)
	{
		ft_putnbr(pos);
		write (1, " x ", 3);
		ft_putnbr(num);
		write (1, " = ", 3);
		ft_putnbr(num * pos);
		write (1, "\n", 1);
		pos++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(argv[1]);
	write (1, "\n", 1);
	return (0);
}
