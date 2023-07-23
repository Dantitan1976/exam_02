/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 08:16:02 by dramirez          #+#    #+#             */
/*   Updated: 2023/07/16 08:44:33 by dramirez         ###   ########.fr       */
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
			if ((argv[1][pos] >= 'A' && argv[1][pos] <= 'M')
				|| (argv[1][pos] >= 'a' && argv[1][pos] <= 'm'))
				argv[1][pos] = argv[1][pos] + 13;
			else if ((argv[1][pos] >= 'N' && argv[1][pos] <= 'Z')
				|| (argv[1][pos] >= 'n' && argv[1][pos] <= 'z'))
				argv[1][pos] = argv[1][pos] - 13;
			write(1, &argv[1][pos], 1);
			pos++;
		}	
	}
	write(1, "\n", 1);
	return (0);
}
