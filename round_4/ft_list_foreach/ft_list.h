/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:57:48 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/15 19:33:39 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}			t_list;

#endif
