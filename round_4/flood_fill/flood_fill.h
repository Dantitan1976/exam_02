/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:41:39 by dramirez          #+#    #+#             */
/*   Updated: 2024/01/21 19:28:46 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOD_FILL_H
# define FLOOD_FILL_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_point
{
	int	x;
	int	y;
}		t_point;

char	**make_area(char **zone, t_point size);
void	fill(char **tab, t_point size, t_point cur, char to_fill);
void	flood_fill(char **tab, t_point size, t_point begin);

#endif
