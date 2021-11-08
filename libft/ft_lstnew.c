/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@42ABUDHABI.AE>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:53:39 by oumali            #+#    #+#             */
/*   Updated: 2021/11/08 11:53:42 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_lstnew(void *content)
{
	t_list *node;
	
	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return NULL;
	node -> content = content;
	node -> next = NULL;
	return (node) ;
}
