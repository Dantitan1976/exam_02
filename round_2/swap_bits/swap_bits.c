/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:48:28 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/06 19:29:55 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet << 4) | (octet >> 4));
}

void	print_bits(unsigned char octet)
{
	unsigned char	bit;
	int				pos;

	pos = 7;
	while (pos >= 0)
	{
		bit = (octet >> pos & 1) + '0';
		write(1, &bit, 1);
		pos--;
	}
}

int	main(int argc, char **argv)
{
	unsigned char	c;
	unsigned char	swap_c;

	if (argc == 2)
	{
		c = argv[1][0];
		print_bits(c);
		swap_c = swap_bits(c);
		write (1, "\n", 1);
		print_bits(swap_c);
		write (1, "\n", 1);
	}
	return (0);
}
