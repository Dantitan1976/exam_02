/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 23:30:17 by dramirez          #+#    #+#             */
/*   Updated: 2023/07/28 23:49:09 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	pos;

	pos = 0;
	if (!s1 || !s2)
		return (NULL);
	while (*s1)
	{
		pos = 0;
		while (s2[pos])
		{
			if (*s1 == s2[pos])
				return ((char *)s1);
			pos++;
		}
		s1++;
	}
	return (NULL);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Cadena origen: %s\n", argv[1]);
		printf("Caracteres a buscar: %s\n", argv[2]);
		printf("Resultado strpbrk: %s\n", strpbrk(argv[1], argv[2]));
		printf("Resultado ft_strpbrk: %s\n", ft_strpbrk(argv[1], argv[2]));
	}
	return (0);
}
