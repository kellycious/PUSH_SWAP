/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:09:48 by khuynh            #+#    #+#             */
/*   Updated: 2022/04/13 01:56:38 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The members of the t_list struct are:
	• content: The data contained in the node.
	void * allows to store any kind of data.
	• next: The address of the next node, or NULL if the next node is the last one.

Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’.  The variable
’next’ is initialized to NULL.

*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*lnew;

	lnew = malloc(sizeof(t_list));
	if (!lnew)
		return (0);
	lnew->content = content;
	lnew->next = NULL;
	return (lnew);
}
