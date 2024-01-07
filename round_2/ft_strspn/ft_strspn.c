/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 00:50:10 by dramirez          #+#    #+#             */
/*   Updated: 2024/01/01 21:30:09 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	char_in_str(char c, const char *s)
{
	int	pos;

	pos = 0;
	while (s[pos])
	{
		if (s[pos] == c)
			return (1);
		pos++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	pos;

	pos = 0;
	while (s[pos])
	{
		if (char_in_str(s[pos], accept))
			pos++;
		else
			return (pos);
	}
	return (pos);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Chars a buscar, S1: %s\n", argv[1]);
		printf("Cadena donde buscamos, S2: %s\n", argv[2]);
		printf("Longitud de la cadena S1");
		printf(" encontrados en S2: %ld\n", strspn(argv[1], argv[2]));
		printf("Rdo. ft_strspn: %ld\n", ft_strspn(argv[1], argv[2]));
	}
	return (0);
}
