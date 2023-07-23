/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:21:58 by dramirez          #+#    #+#             */
/*   Updated: 2023/07/15 09:32:55 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	pos;
	int	letras;

	pos = 0;
	letras = 1;
	if (argc == 2)
	{
		while (argv[1][pos])
		{
			letras = 1;
			if (argv[1][pos] >= 'A' && argv[1][pos] <= 'Z')
				letras = argv[1][pos] - 64;
			if (argv[1][pos] >= 'a' && argv[1][pos] <= 'z')
				letras = argv[1][pos] - 96;
			while (letras >= 1)
			{
				write(1, &argv[1][pos], 1);
				letras--;
			}
			pos++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
