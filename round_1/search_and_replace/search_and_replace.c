/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 09:31:58 by dramirez          #+#    #+#             */
/*   Updated: 2023/07/16 12:12:52 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	pos;

	pos = 0;
	if (argc == 4)
	{
		if (((argv[2][0] >= 'a' && argv[2][0] <= 'z')
			|| (argv[2][0] >= 'A' && argv[2][0] <= 'Z')) && argv[2][1] == '\0')
		{
			if (((argv[3][0] >= 'a' && argv[3][0] <= 'z')
				|| (argv[3][0] >= 'A' && argv[3][0] <= 'Z'))
					&& argv[3][1] == '\0')
			{
				while (argv[1][pos])
				{
					if (argv[1][pos] == argv[2][0])
						argv[1][pos] = argv[3][0];
					write(1, &argv[1][pos], 1);
					pos++;
				}
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
