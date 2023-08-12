/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:21:55 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/12 12:39:46 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	pos;

	if (argc == 2)
	{
		pos = 0;
		while (argv[1][pos])
		{
			if (argv[1][pos] == '_')
			{
				pos = pos + 1;
				argv[1][pos] = argv[1][pos] - 32;
			}
			write(1, &argv[1][pos], 1);
			pos++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
