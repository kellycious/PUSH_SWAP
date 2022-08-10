/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 01:46:48 by khuynh            #+#    #+#             */
/*   Updated: 2022/04/13 01:55:47 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 

Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3). Finally, the pointer to the list must 
be set to NULL.

*/

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst1;

	lst1 = 0;
	while (*lst)
	{
		lst1 = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lst1;
	}
}
