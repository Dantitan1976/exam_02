/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:03:12 by dramirez          #+#    #+#             */
/*   Updated: 2023/12/17 15:16:55 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	prov;

	prov = *a;
	*a = *b;
	*b = prov;
}

/*int	main(int argc, char **argv)
{
	int	num_a;
	int	num_b;
	int	*a;
	int	*b;

	if (argc == 3)
	{
		num_a = atoi(argv[1]);
		num_b = atoi(argv[2]);
		a = &num_a;
		b = &num_b;
		printf("El valor de a es %d, el de b es %d\n", *a, *b);
		ft_swap(a, b);
		printf("El valor de a es ahora %d y el de b es %d\n", *a, *b);
	}
	return (0);
}*/
