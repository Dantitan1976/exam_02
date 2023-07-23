/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 08:53:40 by dramirez          #+#    #+#             */
/*   Updated: 2023/07/15 09:09:19 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
		pos++;
	return (pos);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("ft_strlen = %d\n", ft_strlen(" "));
		return (0);
	}
	printf("ft_strlen(\"%s\") = %d\n", argv[1], ft_strlen(argv[1]));
	return (0);
}
