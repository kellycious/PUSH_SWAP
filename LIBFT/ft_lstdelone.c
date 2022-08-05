/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 01:37:23 by khuynh            #+#    #+#             */
/*   Updated: 2022/04/13 01:55:51 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 

Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node.  The memory of
’next’ must not be freed.

*/

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}
