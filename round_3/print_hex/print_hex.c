/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:11:39 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/14 10:43:30 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi_num(char *str)
{
	int	num;
	int	pos;

	num = 0;
	pos = 0;
	while (str[pos] && str[pos] >= '0' && str[pos] <= '9')
	{
		num = (num * 10) + (str[pos] - '0');
		pos++;
	}
	return (num);
}

void	print_hex(int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n > 15)
		print_hex(n / 16);
	write (1, &base[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi_num(argv[1]));
	write (1, "\n", 1);
}

