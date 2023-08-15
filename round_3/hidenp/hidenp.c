/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:09:46 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/15 18:58:24 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
		pos++;
	return (pos);
}

char	hidenp(char *s1, char *s2)
{
	int	pos1;
	int	pos2;

	pos1 = 0;
	pos2 = 0;
	while (s1[pos1] && s2[pos2])
	{
		if (s1[pos1] == s2[pos2])
		{
			pos1++;
			pos2++;
		}
		else
			pos2++;
	}
	if (pos1 == ft_strlen(s1))
		return ('1');
	else
		return ('0');
}

int	main(int argc, char **argv)
{
	char	res;

	if (argc == 3)
	{
		res = hidenp(argv[1], argv[2]);
		write (1, &res, 1);
	}
	write (1, "\n", 1);
	return (0);
}
