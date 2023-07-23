/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 10:00:16 by dramirez          #+#    #+#             */
/*   Updated: 2023/07/23 11:23:22 by dramirez         ###   ########.fr       */
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
			if (argv[1][pos] >= 'a' && argv[1][pos] <= 'z')
				argv[1][pos] = 219 - argv[1][pos];
			else if (argv[1][pos] >= 'A' && argv[1][pos] <= 'Z')
				argv[1][pos] = 155 - argv[1][pos];
			write(1, &argv[1][pos], 1);
			pos++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
