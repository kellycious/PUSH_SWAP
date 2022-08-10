/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 01:59:58 by khuynh            #+#    #+#             */
/*   Updated: 2022/04/13 23:50:41 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Iterates the list ’lst’ and applies the function
’f’ on the content of each node.  Creates a new
list resulting of the successive applications of
the function ’f’.  The ’del’ function is used to
delete the content of a node if needed.
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*tlst;
	void	*content;

	tlst = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		nlst = ft_lstnew(content);
		if (!nlst)
		{
			del(content);
			while (tlst)
			{
				nlst = tlst->next;
				ft_lstdelone(lst, (tlst->content));
				tlst = nlst;
			}
			return (NULL);
		}
		ft_lstadd_back(&tlst, nlst);
		lst = lst->next;
	}
	return (tlst);
}
