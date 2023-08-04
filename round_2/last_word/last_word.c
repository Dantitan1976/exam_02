/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:56:44 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/04 21:27:25 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
		pos++;
	pos--;
	while ((str[pos] == ' ' || str[pos] == '\t') && pos != 0)
		pos--;
	while (str[pos] != ' ' && str[pos] != '\t' && pos != 0)
		pos--;
	if (str[pos] == ' ' || str[pos] == '\t')
		pos++;
	while (str[pos] != '\0' && str[pos] != ' ' && str[pos] != '\t')
	{
		write (1, &str[pos], 1);
		pos++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write (1, "\n", 1);
}
