/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotstring.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:44:56 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/16 19:27:36 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

void	rotstring(char *str, int pos)
{
	int	start_pos;
	int	end_pos;
	int	has_written;

	has_written = 0;
	while (str[pos] && ft_space(str[pos]))
		pos++;
	start_pos = pos;
	while (str[pos] && !ft_space(str[pos]))
		pos++;
	end_pos = pos;
	while (str[pos])
	{
		while (str[pos] && ft_space(str[pos]))
			pos++;
		while (str[pos] && !ft_space(str[pos]))
		{
			write(1, &str[pos++], 1);
			has_written = 1;
		}
		if (str[pos] || has_written)
			write (1, " ", 1);
	}
	while (start_pos < end_pos)
		write (1, &str[start_pos++], 1);
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
		rotstring(argv[1], 0);
	write(1, "\n", 1);
	return (0);
}
