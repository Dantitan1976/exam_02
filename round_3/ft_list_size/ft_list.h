/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 10:35:34 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/13 18:40:52 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}			t_list;
#endif
