/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:58:17 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/13 08:49:18 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'F')
		return (c + 32);
	return (c);
}

int	pos_char_str(char c, char *str)
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

int	ft_is_valid(char c, int base)
{
	if (pos_char_str(ft_tolower(c), "0123456789abcdef") < base)
		return (1);
	else
		return (0);
}

/*int	ft_atoi_base(const char *str, int str_base)
{
	int		res;
	int		sign;
	int		index;
	char	*base;

	res = 0;
	sign = 1;
	index = 0;
	base = "0123456789abcdef";
	if (str[index] == '-')
	{
		sign *= -1;
		index++;
	}
	while (str[index] != '\0' && ft_is_valid(str[index], str_base))
	{
		res = (str_base * res) + \
				(pos_char_str(ft_tolower(str[index]), base));
		index++;
	}
	return (res * sign);
}*/

int	ft_atoi_base(const char *str, int str_base)
{
	int		num;
	int		sig;
	int		pos;
	char	*base;

	num = 0;
	sig = 1;
	pos = 0;
	base = "0123456789abcdef";
	if (str[pos] == '-')
	{
		sig = sig * -1;
		pos++;
	}
	while (str[pos] && ft_is_valid(str[pos], str_base))
	{
		num = (str_base * num) + (pos_char_str(ft_tolower(str[pos]), base));
		pos++;
	}
	return (num * sig);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", ft_atoi_base(argv[1], atoi(argv[2])));
	}
	return (0);
}
