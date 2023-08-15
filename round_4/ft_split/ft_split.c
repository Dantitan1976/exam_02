/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:35:04 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/15 23:04:03 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_longpalab(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] && !ft_space(str[pos]))
		++pos;
	return (pos);
}

char	*ft_word(char *str)
{
	char	*word;
	int		pos;
	int		len;

	pos = 0;
	len = ft_longpalab(str);
	word = malloc((len + 1) * sizeof(char));
	word[len] = '\0';
	while (pos < len)
	{
		word[pos] = str[pos];
		++pos;
	}
	return (word);
}

void	palab(char **tab, char *str)
{
	int	pos;

	pos = 0;
	while (ft_space(*str))
		++str;
	while (*str)
	{
		tab[pos] = ft_word(str);
		++pos;
		while (*str && !ft_space(*str))
			++str;
		while (ft_space(*str))
			++str;
	}
}

size_t	ft_numpalab(char *s)
{
	size_t	word_num;
	int		pos;

	pos = 0;
	word_num = 0;
	while (s[pos])
	{
		while (s[pos] != '\0' && ft_space(s[pos]))
			pos++;
		if (!ft_space(s[pos]))
			word_num++;
		while (s[pos] != '\0' && !ft_space(s[pos]))
			pos++;
	}
	return (word_num);
}

char	**ft_split(char *str)
{
	char	**tab;
	int		num_words;

	num_words = ft_numpalab(str);
	tab = (char **)malloc((num_words + 1) * sizeof(char *));
	tab[num_words] = 0;
	palab(tab, str);
	return (tab);
}

int	main(int argc, char **argv)
{
	char	**tab;
	int	pos;

	if (argc == 2)
	{
		pos = 0;
		printf("La cadena de entrada es: %s\n", argv[1]);
		tab = ft_split(argv[1]);
		printf("La cadena separada es:\n");
		while (tab[pos] != NULL)
		{
			printf("%d: %s\n", pos + 1, tab[pos]);
			pos++;
		}
	}
	return (0);
}
