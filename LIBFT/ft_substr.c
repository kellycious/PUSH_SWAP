/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:50:06 by khuynh            #+#    #+#             */
/*   Updated: 2022/05/06 12:03:00 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	if (start > i)
		return (ft_calloc(1, sizeof(char)));
	if (start < i)
		j = i - start;
	if (j > len)
		j = len;
	sub = malloc(sizeof(char) * (j + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, j + 1);
	return (sub);
}
/*
#include <stdio.h>
int	main()
{
	char const *s = "abcdefg";
	unsigned int i = 2;
	char *res;

	res = ft_substr(s,i,5);
	printf("%s\n", res);
	printf("cdefg");
	return (0);
}
*/