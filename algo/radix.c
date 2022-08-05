/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 01:47:16 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/04 15:23:13 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	copacopy(t_data *input, int *taba)
{
	int	i;

	i = 0;
	while (i < input->sizeA)
	{
		input->copa[i] = taba[i];
		i++;
	}
}

void	sort_arrayindex(t_data *input)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i < input->sizeA - 1)
	{
		if (input->copa[i] > input->copa[i + 1])
		{
			ft_swap(&input->copa[i], &input->copa[i + 1]);
			temp = 1;
		}
		i++;
	}
	if (temp)
		sort_arrayindex(input);
}

void	indexmatch(t_data *input)
{
	int	i;
	int	j;

	i = 0;
	sort_arrayindex(input);
	while (i < input->sizeA)
	{
		j = 0;
		while (j < input->sizeA)
		{
			if (input->taba[i] == input->copa[j])
				input->index[i] = j;
			j++;
		}
		i++;
	}
}

// savoir cb x il faut shifter pour comparer tous les bits
// commencer à 1 forcément pcq 0 = 1 bit

int	maxbit(t_data *input)
{
	int	size;
	int	max;

	size = input->sizeA;
	max = 1;
	while (size >> max != 0)
		max++;
	return (max);
}

/* 1è boucle, tant qu'on a pas comparé tous les bits
   2è boucle pour compare tous les inputs
		>> shift jusqu'au max bit, regarder si le bit = 1
   3è push back to a pour avoir une stack B vide
   mettre size dans une variable pcq elle doit rester fixe malgre les pushB/A
*/

void	sortfinal(t_data *input)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = input->sizeA;
	indexmatch(input);
	input->taba = input->index;
	free(input->index);
	while (i < maxbit(input))
	{
		j = 0;
		while (j < size)
		{
			if (((input->taba[0] >> i) & 1) == 1)
				rotate_a(input->taba, input->sizeA);
			else
				push_b(input);
			j++;
		}
		while (input->sizeB != 0)
			push_a(input);
		i++;
	}
}