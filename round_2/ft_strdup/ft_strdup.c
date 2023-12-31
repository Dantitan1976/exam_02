/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 22:14:56 by dramirez          #+#    #+#             */
/*   Updated: 2023/12/30 20:28:01 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = ft_strlen(src);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	len = 0;
	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

/*int	main(int argc, char **argv)
{
	char	*original;
	char	*duplicada;

	if (argc == 2)
	{
		original = argv[1];
		duplicada = ft_strdup(argv[1]);
		printf("Cadena src: %s\n", argv[1]);
		printf("Cadena dest strdup: %s\n", strdup(original));
		printf("Cadena dest ft_strdup: %s\n", duplicada);
		free (duplicada);
	}
	return (0);
}*/
