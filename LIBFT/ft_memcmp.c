/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:26:56 by khuynh            #+#    #+#             */
/*   Updated: 2022/04/13 19:12:18 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main () {
   const char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "aBcdef", 6);
   memcpy(str2, "abcdef", 6);

   ret = ft_memcmp(str1, str2, 5);

   printf("%d\n",ft_memcmp(str1, str2, 5));
   printf("%d\n",memcmp(str1, str2, 5));

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}*/