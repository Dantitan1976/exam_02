/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:01:59 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/20 16:39:28 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_isblank(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char	**ft_split(char *str)
{
	char	**split;
	int		pos;
	int		count;
	int		split_count;

	count = 0;
	pos = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[count] && ft_isblank(str[count]))
			count++;
	while (str[count])
	{
		split_count = 0;
		if (!(split[pos] = (char *)malloc(sizeof(char *) * 4096)))
			return (NULL);
		while (str[count] && !ft_isblank(str[count]))
			split[pos][split_count++] = str[count++];
		while (str[count] && ft_isblank(str[count]))
			count += 1;
		split[pos][split_count] = '\0';
		pos += 1;
	}
	split[pos] = NULL;
	return (split);
}

int	main(int argc, char **argv)
{
	char	**tab;
	int		pos;
	char	*str;

	if (argc == 2)
	{
		pos = 0;
		str = argv[1];
		printf("La cadena de entrada es: %s\n", str);
		tab = ft_split(str);
		printf("La cadena separada es: \n");
		while (tab[pos])
		{
			printf("%d: %s\n", pos + 1, tab[pos]);
			pos++;
		}
	}
	return (0);
}
