/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:47:58 by dramirez          #+#    #+#             */
/*   Updated: 2023/07/23 14:07:57 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	main(void)
{
	char	*str;

	str = "+945";
	printf("Con atoi\nCadena: %s, numero: %i\n", str, atoi(str));
	printf("Con ft_atoi\nCadena: %s, numero: %i\n", str, ft_atoi(str));
	return (0);
}
