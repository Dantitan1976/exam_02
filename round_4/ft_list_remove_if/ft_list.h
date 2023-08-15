/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:37:32 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/15 20:30:28 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}			t_list;

#endif