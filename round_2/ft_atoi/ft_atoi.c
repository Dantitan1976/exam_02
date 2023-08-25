/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:47:58 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/24 16:25:32 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	num;
	int	sig;
	int	pos;

	pos = 0;
	sig = 1;
	num = 0;
	while (str[pos] != '\0' && (str[pos] == ' '
			|| (str[pos] >= 9 && str[pos] <= 13)))
		pos++;
	if (str[pos] != '\0' && str[pos] == '-')
	{
		sig = sig * -1;
		pos++;
	}
	else if (str[pos] == '+')
		pos++;
	while (str[pos] != '\0' && (str[pos] >= '0' && str[pos] <= '9'))
	{
		num = (num * 10) + (str[pos] - '0');
		pos++;
	}
	return (num * sig);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		printf("Con atoi. Cadena: %s, numero: %i\n", str, atoi(str));
		printf("Con ft_atoi. Cadena: %s, numero: %i\n", str, ft_atoi(str));
	}
	else
		write(1, "\n", 1);
	return (0);
}
