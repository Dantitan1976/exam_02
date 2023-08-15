/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:56:00 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/15 19:10:31 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

void	str_capitalizer(char *str)
{
	int		pos;
	char	c;

	pos = 0;
	while (str[pos])
	{
		if ((lower(str[pos]) && (space(str[pos + 1]) && space(str[pos - 1])))
			|| (lower(str[pos]) && (space(str[pos - 1])))
			|| (pos == 0 && lower(str[pos])))
		{
			c = str[pos] - 32;
			write (1, &c, 1);
		}
		else if (upper(str[pos]) && !space(str[pos - 1]))
		{
			c = str[pos] + 32;
			write (1, &c, 1);
		}
		else
			write (1, &str[pos], 1);
		pos++;
	}
}

int	main(int argc, char **argv)
{
	int	arg;

	if (argc > 1)
	{
		arg = 1;
		while (arg < argc)
		{
			str_capitalizer(argv[arg]);
			if (arg < argc - 1)
				write (1, "\n", 1);
			arg++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
