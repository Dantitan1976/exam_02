/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:04:57 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/12 15:12:31 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

void	ft_epur_str(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		while (str[pos] && ft_isspace(str[pos]))
			pos++;
		while (str[pos] && !ft_isspace(str[pos]))
		{
			write(1, &str[pos], 1);
			pos++;
		}
		if (ft_isspace(str[pos]) && str[pos + 1] != '0')
		{
			write(1, &str[pos], 1);
			pos++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
