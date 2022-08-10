/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:22:42 by khuynh            #+#    #+#             */
/*   Updated: 2022/04/13 20:56:18 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_nlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*dest;
	long long		a;

	len = ft_nlen(n);
	a = n;
	dest = malloc(sizeof(char) *(len + 1));
	if (!dest)
		return (0);
	if (a < 0)
	{
		dest[0] = '-';
		a = -a;
	}
	if (a == 0)
		dest[0] = '0';
	dest[len--] = '\0';
	while (a)
	{
		dest[len] = ((a % 10) + 48);
		a /= 10;
		len--;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

int	main()
{
	printf("********* itoa **********\n");
	printf("---------------------------\n");
	printf("ft_itoa = %s\n", ft_itoa(1234));
	printf("---------------------------\n");
	printf("---------------------------\n");
	printf("ft_itoa = %s\n", ft_itoa(2147483647));
	printf("---------------------------\n");
	printf("---------------------------\n");
	printf("ft_itoa = %s\n", ft_itoa(-2147483648));
	printf("---------------------------\n");
	printf("---------------------------\n");
	printf("ft_itoa = %s\n", ft_itoa(0));
	printf("---------------------------\n");
	printf("---------------------------\n");
	printf("ft_itoa = %s\n", ft_itoa(-1234));
	printf("---------------------------\n");
	printf("---------------------------\n");
	printf("ft_itoa = %s\n", ft_itoa(42));
	printf("---------------------------\n");
	return (0);	
}
*/