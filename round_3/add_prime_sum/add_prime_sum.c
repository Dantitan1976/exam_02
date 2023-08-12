/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:21:55 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/12 17:50:30 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	num;
	int	sig;
	int	pos;

	pos = 0;
	sig = 1;
	num = 0;
	while (str[pos] != '\0' && (str[pos] == ' '
			|| (str[pos] >= 9 && str[pos] <= 13)))
		pos++;
	if (str[pos] != '\0' && (str[pos] == '-'))
	{
		sig = sig * -1;
		pos++;
	}
	else if (str[pos] == '+')
		pos++;
	while (str[pos] != '\0' && (str[pos] >= '0' && str[pos] <= '9'))
	{
		num = (num * 10) + (str[pos] - '0');
		pos++;
	}
	return (num * sig);
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else
		ft_putchar(n + '0');
}

int	ft_is_prime(int n)
{
	int	num;

	num = 2;
	if (n <= 1)
		return (0);
	while (num <= (n / 2))
	{
		if (n % num == 0)
			return (0);
		num++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	num;
	int	sum;

	sum = 0;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		if (num < 0)
			write(1, "0", 1);
		else
		{
			while (num > 0)
			{
				if (ft_is_prime(num))
					sum = sum + num;
				num--;
			}
			ft_putnbr(sum);
		}
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
