/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 09:44:27 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/12 10:35:48 by dramirez         ###   ########.fr       */
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

void	ft_putstr(char *str)
{
	write (1, str, ft_strlen(str));
}

int	ft_wdmatch(char *str1, char *str2)
{
	int	pos_str1;
	int	pos_str2;

	pos_str1 = 0;
	pos_str2 = 0;
	while (str2[pos_str2])
	{
		if (str1[pos_str1] == str2[pos_str2])
		{
			pos_str1++;
			pos_str2++;
		}
		else
			pos_str2++;
	}
	return (pos_str1 == ft_strlen (str1));
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (ft_wdmatch(argv[1], argv[2]))
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

