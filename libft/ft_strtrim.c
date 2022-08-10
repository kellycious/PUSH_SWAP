/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 02:53:57 by khuynh            #+#    #+#             */
/*   Updated: 2022/04/13 20:55:47 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

static int	ft_index(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmy;
	size_t	i;
	size_t	d;
	size_t	f;

	d = 0;
	if (!s1 || !set)
		return (0);
	while (s1[d] && ft_index(s1[d], set))
		d++;
	f = ft_strlen(s1);
	while (f > d && ft_index(s1[f - 1], set))
		f--;
	trimmy = malloc(sizeof(char) * (f - d + 1));
	if (!trimmy)
		return (0);
	i = 0;
	while (d < f)
		trimmy[i++] = s1[d++];
	trimmy[i] = '\0';
	return (trimmy);
}

/*
#include <stdio.h>

int main (void)
{
    char *a = "kelly allo kelly";
    char *b = "kelly";
    printf("%s\n",ft_strtrim(a,b));
}*/