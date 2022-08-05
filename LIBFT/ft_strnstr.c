/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:09:37 by khuynh            #+#    #+#             */
/*   Updated: 2022/04/13 20:32:43 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	if (*needle == 0)
		return ((char *)haystack);
	a = 0;
	while (haystack[a] && a < len)
	{
		b = 0;
		while (haystack[a + b] == needle[b] && (a + b < len))
		{
			if (needle[b + 1] == '\0')
				return ((char *)haystack + a);
			b++;
		}
		a++;
	}
	return (0);
}

/*
#include <stdio.h>

int main()
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;
 
ptr = ft_strnstr(largestring, smallstring, 5);
printf("%s", ptr);
return (0);
}
*/