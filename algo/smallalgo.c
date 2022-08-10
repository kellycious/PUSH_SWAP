/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallalgo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:10:51 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/10 19:20:25 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	sort_three(int *taba, int size)
{
	if (size == 2)
		swap_a(taba, size);
	if (size == 3)
	{
		if ((taba[0] > taba[1] && taba[1] > taba[2])
			|| (taba[2] == max(taba, size))
			|| ((taba[0] == min(taba, size) && taba[1] == max(taba, size))))
			swap_a(taba, size);
		if (taba[0] == max(taba, size))
			rotate_a(taba, size);
		if (taba[1] == max(taba, size) && taba[2] == min(taba, size))
			reverse_ra(taba, size);
	}
}

void	sort_four(t_data *input)
{
	int	mini;

	mini = min(input->taba, input->sizeA);
	if (position(input->taba, input->sizeA, mini) == 1)
		rotate_a(input->taba, input->sizeA);
	if (position(input->taba, input->sizeA, mini) == 2)
	{
		rotate_a(input->taba, input->sizeA);
		rotate_a(input->taba, input->sizeA);
	}
	else if (position(input->taba, input->sizeA, mini) == 3)
		reverse_ra(input->taba, input->sizeA);
	if (sorted_yn(input, input->sizeA) == 0)
		return ;
	push_b(input);
	sort_three(input->taba, 3);
	push_a(input);
}

void	sort_five(t_data *input)
{
	int	mini;

	mini = min(input->taba, input->sizeA);
	if (position(input->taba, input->sizeA, mini) == 1)
		rotate_a(input->taba, input->sizeA);
	else if (position(input->taba, input->sizeA, mini) == 2)
	{
		rotate_a(input->taba, input->sizeA);
		rotate_a(input->taba, input->sizeA);
	}
	else if (position(input->taba, input->sizeA, mini) == 3)
	{
		reverse_ra(input->taba, input->sizeA);
		reverse_ra(input->taba, input->sizeA);
	}
	else if (position(input->taba, input->sizeA, mini) == 4)
		reverse_ra(input->taba, input->sizeA);
	if (sorted_yn(input, input->sizeA) == 0)
		return ;
	push_b(input);
	sort_four(input);
	push_a(input);
}

void	sort_small(t_data *input)
{
	if (input->sizeA <= 3)
		sort_three(input->taba, input->sizeA);
	if (input->sizeA == 4)
		sort_four(input);
	if (input->sizeA == 5)
		sort_five(input);
}
