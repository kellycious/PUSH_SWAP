/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:15:01 by khuynh            #+#    #+#             */
/*   Updated: 2022/04/13 18:37:48 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
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
	while (str[i] >= '0' && str[i] <= '9')
	{	
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (sign * nb);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	printf("%d\n", ft_atoi(" 	-42"));
	printf("%d\n", atoi(" 	-42"));
}	
*/