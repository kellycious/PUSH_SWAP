/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:50:39 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/12 00:46:27 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push.h"

// remplir stackA (data->taba) with nb input in args

int	*stack_a(t_data *data, char **input)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= data->sizeA)
	{
		data->taba[j] = ft_atoi(input[i]);
		i++;
		j++;
	}
	return (data->taba);
}

// check les doublons dans tableau data->taba

int	check_dbl(int size, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{			
			if (data->taba[i] == data->taba[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

// check si parsing ok (doublon, alpha only, between int min-max)

int	tab_ok(int size, char **input, t_data *data)
{
	if (size < 1 || args_ok(input) == 1)
		return (1);
	if (check_dbl(size, data) == 1)
	{
		write (2, "ERROR: You have input 2 same nb\n", 33);
		return (1);
	}
	return (0);
}