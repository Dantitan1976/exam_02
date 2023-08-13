/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez </var/mail/dramirez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 10:35:34 by dramirez          #+#    #+#             */
/*   Updated: 2023/08/13 11:20:54 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_SIZE_H
# define FT_LIST_SIZE_H

typedef struct	s_list
{
	struct s_list	*next;
	void		*data;
}			t_list;
#endif
