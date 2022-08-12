/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:55:12 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/12 00:46:30 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push.h"

/* push stackB[0] to stackA[0], careful each stack needs to rearrange itself
	1. malloc bigger stack A to copy stackb[0] and shift nb by one, size+1
	2.copy it back to original stack A
	3. don't forget to update the size of the stack*/

int	add2taba(t_data *input)
{
	int		*duplitab;
	int		i;

	i = 0;
	duplitab = malloc(sizeof(int) * (input->sizeA + 1));
	if (!duplitab)
		return (0);
	duplitab[0] = input->tabb[0];
	while (i < input->sizeA)
	{
		duplitab[i + 1] = input->taba[i];
		i++;
	}
	free(input->taba);
	input->taba = duplitab;
	input->sizeA++;
	return (1);
}

int	delete4tabb(t_data *input)
{
	int		*duplitab;
	int		i;

	i = 0;
	duplitab = malloc(sizeof(int) * (input->sizeB));
	if (!duplitab)
		return (0);
	while (i < input->sizeB - 1)
	{
		duplitab[i] = input->tabb[i + 1];
		i++;
	}
	free(input->tabb);
	input->tabb = duplitab;
	input->sizeB--;
	return (1);
}

int	push_a(t_data *input)
{
	if (!add2taba(input))
		return (0);
	if (!delete4tabb(input))
		return (0);
	ft_putstr_fd("pa\n", 1);
	return (1);
}
