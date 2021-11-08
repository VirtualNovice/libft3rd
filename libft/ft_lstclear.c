/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:54:43 by oumali            #+#    #+#             */
/*   Updated: 2021/11/08 11:23:33 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void(*del)(void*))
{
	t_list *node;

	node = *lst;
	while(*lst != NULL)
	{
		*lst = (*lst)-> next;
		ft_lstdelone(node, del);
		node = *lst;
	}
	node = NULL;
	
}
