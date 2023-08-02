/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:09:22 by dramirez          #+#    #+#             */
/*   Updated: 2023/07/23 12:29:37 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	num1;
	int	num2;
	int	res;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if (argv[2][0] == '+')
			res = num1 + num2;
		else if (argv[2][0] == '-')
			res = num1 - num2;
		else if (argv[2][0] == '*')
			res = num1 * num2;
		else if (argv[2][0] == '/')
			res = num1 / num2;
		else if (argv[2][0] == '%')
			res = num1 % num2;
		printf("%d\n", res);
	}
	else
		write(1, "\n", 1);
	return (0);
}
