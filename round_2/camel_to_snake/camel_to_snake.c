/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:05:00 by dramirez          #+#    #+#             */
/*   Updated: 2023/07/23 11:39:47 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	pos;

	pos = 0;
	if (argc == 2)
	{
		while (argv[1][pos])
		{
			if (argv[1][pos] >= 'A' && argv[1][pos] <= 'Z')
			{
				argv[1][pos] = argv[1][pos] + 32;
				write(1, "_", 1);
			}
			write(1, &argv[1][pos], 1);
			pos++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
