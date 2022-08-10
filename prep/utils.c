/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:05:22 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/10 20:51:38 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

// check que l'input n'est pas encore trie

int	sorted_yn(t_data *input, int size)
{
	int	i;

	i = 0;
	while (i != size - 1)
	{
		if (input->taba[i + 1] < input->taba[i])
			return (1);
		i++;
	}
	return (0);
}

// chercher + gd nombre ds un array

int	max(int *taba, int size)
{
	int	i;
	int	j;

	i = 0;
	j = taba[0];
	while (i < size)
	{
		if (taba[i] > j)
			j = taba[i];
		i++;
	}
	return (j);
}

// chercher + petit nb dans array

int	min(int *taba, int size)
{
	int	i;
	int	j;

	i = 0;
	j = taba[0];
	while (i < size)
	{
		if (taba[i] < j)
			j = taba[i];
		i++;
	}
	return (j);
}

// position for small sort to pb smallest

int	position(int *tab, int size, int index)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		if (tab[i] == index)
			break ;
		pos++;
		i++;
	}
	return (pos);
}

// initialise struct avec malloc stack a/b/copa/index

int	initstruct(t_data *input, int size)
{
	input->sizeA = size;
	input->sizeB = 0;
	input->taba = malloc(sizeof(int) * size);
	if (!input->taba)
		return (0);
	input->tabb = malloc(sizeof(int) * size);
	if (!input->tabb)
		return (0);
	input->copa = malloc(sizeof(int) * size);
	if (!input->copa)
		return (0);
	input->index = malloc(sizeof(int) * size);
	if (!input->index)
		return (0);
	return (1);
}
