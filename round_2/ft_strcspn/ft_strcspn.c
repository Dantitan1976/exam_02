/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 22:28:13 by dramirez          #+#    #+#             */
/*   Updated: 2023/12/31 07:25:50 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	pos_s;
	int	pos_rej;

	pos_s = 0;
	pos_rej = 0;
	while (s[pos_s] != '\0')
	{
		while (reject[pos_rej] != '\0')
		{
			if (reject[pos_rej] == s[pos_s])
				return (pos_s);
			pos_rej++;
		}
		pos_rej = 0;
		pos_s++;
	}
	return (pos_s);
}

/*int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Cadena 1: %s\n", argv[1]);
		printf("Cadena 2: %s\n", argv[2]);
		printf("strcspn: %zu\n", strcspn(argv[1], argv[2]));
		printf("ft_strcspn: %zu\n", ft_strcspn(argv[1], argv[2]));
	}
	return (0);
}*/
