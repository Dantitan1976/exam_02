/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:23:00 by dramirez          #+#    #+#             */
/*   Updated: 2023/12/05 18:19:09 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	pos;

	pos = 0;
	if (argc == 2)
	{
		while (argv[1][pos] != '\0')
			pos++;
		while (pos >= 1)
		{
			write(1, &argv[1][pos - 1], 1);
			pos--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
