/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:28:13 by dramirez          #+#    #+#             */
/*   Updated: 2023/10/15 19:54:11 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	blank(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	pos;
	int	flag;

	pos = 0;
	if (argc == 2)
	{
		while (argv[1][pos] && blank(argv[1][pos]))
			pos++;
		while (argv[1][pos])
		{
			if (blank(argv[1][pos]))
				flag = 1;
			if (!(blank(argv[1][pos])))
			{
				if (flag)
					write (1, "   ", 3);
				flag = 0;
				write (1, &argv[1][pos], 1);
			}
			pos++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
