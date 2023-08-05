/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:03:10 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/05 19:27:05 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	print_bits(unsigned char octet)
{
	unsigned char	bit;
	int				pos;

	pos = 7;
	while (pos >= 0)
	{
		bit = (octet >> pos & 1) + '0';
		write (1, &bit, 1);
		pos--;
	}
}

int	main(int argc, char **argv)
{
	unsigned char	octet;

	if (argc == 2)
	{
		printf("Número a convertir: %s\n", argv[1]);
		octet = atoi(argv[1]);
		print_bits(octet);
		printf("\n");
	}
	return (0);
}
