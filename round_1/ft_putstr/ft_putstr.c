/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 21:40:51 by dramirez          #+#    #+#             */
/*   Updated: 2023/12/05 13:52:08 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		write(1, &str[pos], 1);
		pos++;
	}
}

/*int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("ft_putstr(\"\")\n");
		return (0);
	}
	printf("ft_putstr(\"%s\")\n", argv[1]);
	ft_putstr(argv[1]);
	printf("\n");
	return (0);
}*/
