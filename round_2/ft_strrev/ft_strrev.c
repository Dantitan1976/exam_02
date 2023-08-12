/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 22:56:57 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/12 12:29:12 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
		pos++;
	return (pos);
}

char	*ft_strrev(char *str)
{
	int		pos;
	int		pos_last_char;
	char	c;

	pos = 0;
	pos_last_char = ft_strlen(str);
	while (pos < (pos_last_char / 2))
	{
		c = str[pos];
		str[pos] = str[pos_last_char - pos - 1];
		str[pos_last_char - pos - 1] = c;
		pos++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		printf("Cadena origen: %s\n", argv[1]);
		str = ft_strrev(argv[1]);
		printf("Cadena ft_strrev: %s\n", str);
	}
	return (0);
}
