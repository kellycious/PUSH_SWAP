/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:20:45 by khuynh            #+#    #+#             */
/*   Updated: 2022/05/04 18:25:10 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
			return (((void *)s) + i);
		i++;
	}
	if (!c)
		return (((void *)s) + i);
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main () {
   char str[] = "http://www.tutorialspoint.com";
   char ch = ' ';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}
*/
