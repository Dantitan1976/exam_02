/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:40:03 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/02 22:01:52 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	char_in_str(char c, char *str)
{
	int pos;

	pos = 0;
	while (str[pos])
	{
		if(str[pos] == c)
			return (1);
		pos++;
	}
	return (0);
}

int	pos_char_in_str(char c, char *str)
{
	int pos;

	pos = 0;
	while (str[pos])
	{
		if(str[pos] == c)
			return (pos);
		pos++;
	}
	return (pos);
}

void	ft_inter(char *str1, char *str2)
{
	int	pos;

	pos = 0;
	while (str1[pos])
	{
		if(pos_char_in_str(str1[pos], str1) >= pos)
			if (char_in_str(str1[pos], str2))
				write(1, &str1[pos], 1);
		pos++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
