/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 08:19:56 by dramirez          #+#    #+#             */
/*   Updated: 2023/12/05 14:06:30 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	while (s2[pos])
	{
		s1[pos] = s2[pos];
		pos++;
	}
	s1[pos] = '\0';
	return (s1);
}

/*int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = malloc(sizeof(char) * 100);
		printf("ft_strcpy(\"%s\", str) = %s\n", argv[1], ft_strcpy(str, argv[1]));
		free(str);
	}
	return (0);
}*/
