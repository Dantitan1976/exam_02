/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:16:24 by dramirez          #+#    #+#             */
/*   Updated: 2023/12/30 10:43:20 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	while (s1[pos] != '\0' || s2[pos] != '\0')
	{
		if (s1[pos] != s2[pos])
			return (s1[pos] - s2[pos]);
		pos++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Str 1 = %s\n", argv[1]);
		printf("Str 2 = %s\n", argv[2]);
		printf("Diferencia strcmp: %i\n", strcmp(argv[1], argv[2]));
		ft_strcmp(argv[1], argv[2]);
		printf("Diferencia ft_strcmp: %i\n", ft_strcmp(argv[1], argv[2]));
		return (0);
	}
}*/
