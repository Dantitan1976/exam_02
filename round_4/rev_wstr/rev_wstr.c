/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:33:31 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/16 18:32:49 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
		pos++;
	return (pos);
}

void	rev_wstr(char *str)
{
	int	pos;
	int	start;
	int	end;
	int	is_end;

	pos = ft_strlen(str) - 1;
	while (pos > 0)
	{
		while (ft_space(str[pos]))
			pos--;
		end = pos;
		while (pos >= 0 && !ft_space(str[pos]))
			pos--;
		start = pos + 1;
		is_end = start;
		while (start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
		if (is_end != '\0')
			write(1, " ", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
}
