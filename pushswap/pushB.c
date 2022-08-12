/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushB.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:55:12 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/12 00:46:32 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push.h"

// push stackA[0] to stackB[0], careful each stack needs to rearrange itself

int	add2tabb(t_data *input)
{
	int		*duplitab;
	int		i;

	i = 0;
	duplitab = malloc(sizeof(int) * (input->sizeB + 1));
	if (!duplitab)
		return (0);
	duplitab[0] = input->taba[0];
	while (i < input->sizeB)
	{
		duplitab[i + 1] = input->tabb[i];
		i++;
	}
	free(input->tabb);
	input->tabb = duplitab;
	input->sizeB++;
	return (1);
}

int	delete4taba(t_data *input)
{
	int		*duplitab;
	int		i;

	i = 0;
	duplitab = malloc(sizeof(int) * (input->sizeA));
	if (!duplitab)
		return (0);
	while (i < input->sizeA - 1)
	{
		duplitab[i] = input->taba[i + 1];
		i++;
	}
	free(input->taba);
	input->taba = duplitab;
	input->sizeA--;
	return (1);
}

int	push_b(t_data *input)
{
	if (!add2tabb(input))
		return (0);
	if (!delete4taba(input))
		return (0);
	ft_putstr_fd("pb\n", 1);
	return (1);
}
