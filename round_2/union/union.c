/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:38:17 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/12 12:37:06 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	char_in_str(char c, char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (str[pos] == c)
			return (1);
		pos++;
	}
	return (0);
}

int	pos_char_in_str(char c, char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (str[pos] == c)
			return (pos);
		pos++;
	}
	return (pos);
}

void	ft_union(char *str1, char *str2)
{
	int	pos;

	pos = 0;
	while (str1[pos])
	{
		if (pos_char_in_str(str1[pos], str1) >= pos)
			write(1, &str1[pos], 1);
		pos++;
	}
	pos = 0;
	while (str2[pos])
	{
		if (!char_in_str(str2[pos], str1)
			&& pos_char_in_str(str2[pos], str2) >= pos)
			write (1, &str2[pos], 1);
		pos++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union (argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}
