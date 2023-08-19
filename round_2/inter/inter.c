/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:40:03 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/17 19:05:25 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	char_in_str(char c, char *str)
{
	int	pos_char;

	pos_char = 0;
	while (str[pos_char])
	{
		if (str[pos_char] == c)
			return (1);
		pos_char++;
	}
	return (0);
}

int	pos_char_in_str(char c, char *str)
{
	int	pos_char;

	pos_char = 0;
	while (str[pos_char])
	{
		if (str[pos_char] == c)
			return (pos_char);
		pos_char++;
	}
	return (pos_char);
}

void	ft_inter(char *str1, char *str2)
{
	int	pos_inter;
	char	c;

	pos_inter = 0;
	while (str1[pos_inter])
	{
		if (pos_char_in_str(str1[pos_inter], str1) >= pos_inter)
			if (char_in_str(str1[pos_inter], str2))
			{
				c = str1[pos_inter];
				write(1, &c, 1);
			}
		pos_inter++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
