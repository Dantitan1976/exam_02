/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:58:44 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/05 20:19:16 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res;
	int				bits;

	bits = 8;
	res = 0;
	while (bits > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		bits--;
	}
	return (res);
}

void	print_bits(unsigned char octet)
{
	unsigned char	bits;
	int				pos;

	pos = 7;
	while (pos >= 0)
	{
		bits = (octet >> pos & 1) + '0';
		write (1, &bits, 1);
		pos--;
	}
}

int	main (int argc, char **argv)
{
	unsigned char	num;
	unsigned char	rev_num;

	if (argc == 2)
	{
		printf("Número a convertir: %s\n", argv[1]);
		num = atoi(argv[1]);
		print_bits(num);
		printf("\n");
		rev_num = reverse_bits(num);
		print_bits(rev_num);
		printf("\n");
	}
	return (0);
}
