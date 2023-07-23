/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:03:12 by dramirez          #+#    #+#             */
/*   Updated: 2023/07/15 09:11:01 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	prov;

	prov = *a;
	*a = *b;
	*b = prov;
}

int	main(void)
{
	int	*a;
	int	*b;
	int	n1;
	int	n2;

	n1 = 10;
	n2 = 25;
	a = &n1;
	b = &n2;
	printf("El valor de n1 es: %u y el valor de n2 es: %u.\n", *a, *b);
	ft_swap(a, b);
	printf("Ahora el valor de n1 es: %u y el de n2 es: %u.\n", *a, *b);
}
