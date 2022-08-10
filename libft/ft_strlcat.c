/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:19:02 by khuynh            #+#    #+#             */
/*   Updated: 2022/05/06 16:00:40 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldest;
	size_t	lsrc;
	size_t	i;

	ldest = ft_strlen(dst);
	lsrc = ft_strlen(src);
	i = 0;
	if (ldest >= dstsize || dstsize == 0)
		return (lsrc + dstsize);
	while (src[i] && ldest + 1 + i < dstsize)
	{
		dst[ldest + i] = src[i];
		i++;
	}
	dst[ldest + i] = '\0';
	return (ldest + lsrc);
}

/*
#include <stdio.h>

int	main()
{
	const char a[8] = "tototo";
	char b[8] = "tata";
	printf("%zu", ft_strlcat(b, a, 2));
} 
*/
