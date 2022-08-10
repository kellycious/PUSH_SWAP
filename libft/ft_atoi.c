/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:15:01 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/10 15:52:47 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

/*int	ft_atoi(const char *str)
{
	long int	nb;
	long int	sign;
	long int	i;

	nb = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	while (i < 13 && (str[i] >= '0' && str[i] <= '9'))
	{	
		nb = nb * 10 + str[i] - '0';
		i++;
	}
*/


long    ft_atoi(const char *nptr)
{
    int        i;
    long    res;
    long    minus;

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
    {
	    res = (res * 10 + (nptr[i] - 48));
	}	
	if (res < INT_MAX && res > INT_MIN)
		return (minus * res);
	else
		return (2147483648);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	printf("atoi = %ld\n", ft_atoi("2147483649"));
	printf("int max = %d\n", INT_MAX);
}
*/

