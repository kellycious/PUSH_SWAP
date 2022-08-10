/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:38:24 by khuynh            #+#    #+#             */
/*   Updated: 2022/04/11 22:57:46 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*joiny;
	size_t		lens1;
	size_t		lens2;
	size_t		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	joiny = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!joiny)
		return (NULL);
	while (s1[i])
	{
		joiny[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
		joiny[lens1++] = s2[i++];
	joiny[lens1] = '\0';
	return (joiny);
}

/*
#include <stdio.h>

int	main(void)
{
	const char a[] = "hello";
	const char b[] = " world";
	printf("%s\n",  ft_strjoin(a, b));
}
*/