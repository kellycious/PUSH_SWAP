/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:50:39 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/18 17:19:35 by khuynh           ###   ########.fr       */
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
	while (i <= data->sizea)
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
	if (args_ok(input) == 1)
		return (freestruct(data), free(data->index), 1);
	if (check_dbl(size, data) == 1)
	{
		write (2, "ERROR: You have input 2 same nb\n", 33);
		freestruct(data);
		free(data->index);
		return (1);
	}
	return (0);
}

void	freestruct(t_data *data)
{
	free(data->taba);
	free(data->tabb);
	free(data->copa);
}
