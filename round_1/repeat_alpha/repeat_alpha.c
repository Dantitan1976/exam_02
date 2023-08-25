/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:21:58 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/23 07:53:22 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		pos;
	int		num_letras;
	char	letra;

	pos = 0;
	num_letras = 1;
	if (argc == 2)
	{
		while (argv[1][pos])
		{
			num_letras = 1;
			letra = argv[1][pos];
			if (letra >= 'A' && letra <= 'Z')
				num_letras = letra - 64;
			if (argv[1][pos] >= 'a' && argv[1][pos] <= 'z')
				num_letras = letra - 96;
			while (num_letras >= 1)
			{
				write(1, &letra, 1);
				num_letras--;
			}
			pos++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
