/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 20:54:18 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/10 20:54:18 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

long	ft_atoi(const char *nptr)
{
	int		i;
	long	res;
	long	minus;

	minus = 1;
	res = 0;
	i = -1;
	while ((*nptr >= 9 && *nptr <= 13) || (*nptr == ' '))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
	minus *= -1;
		nptr++;
	}
	while (*nptr == '0')
		nptr++;
	while (nptr[++i] && i < 13 && nptr[i] >= '0' && nptr[i] <= '9')
	res = (res * 10 + (nptr[i] - 48));
	res *= minus;
	if (res > INT_MAX || res < INT_MIN)
		return (2147483648);
	else
		return (res);
}
/* 
int	main()
{
	char a[] = "2147483648";
	printf("%ld\n", ft_atoi(a));
	printf("%d\n", atoi(a));
	return (0);
} */