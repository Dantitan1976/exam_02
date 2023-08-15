/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 08:17:01 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/15 11:46:12 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_num_len(int num)
{
	int	pos;

	pos = 0;
	if (num < 0)
	{
		pos++;
		if (num == INT_MIN)
		{
			num = num / 10;
			pos++;
		}
		num = num * -1;
	}
	while (num > 9)
	{
		num = num / 10;
		pos++;
	}
	pos++;
	return (pos);
}

char	*ft_itoa(int nbr)
{
	int		pos;
	char	*res;
	int		len;

	len = ft_num_len(nbr);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	pos = len - 1;
	if (nbr < 0)
	{
		if (nbr == INT_MIN)
			return ("-2147483648");
		nbr = nbr * -1;
		res[0] = '-';
	}
	while (nbr > 9)
	{
		res[pos] = (nbr % 10) + '0';
		nbr = nbr / 10;
		pos--;
	}
	res[pos] = nbr + '0';
	return (res);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = ft_itoa(atoi(argv[1]));
		printf("El número %d en forma de str = %s\n", atoi(argv[1]), str);
		free(str);
	}
	return (0);
}
