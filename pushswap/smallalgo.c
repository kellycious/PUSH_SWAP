/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallalgo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:10:51 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/18 17:19:55 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push.h"

/* only few solutions:
213 | 132 | 321 = SA 
312 = RA 
231 = RRA */

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

// calculer cb de coup pour arriver à la position de la + p'tite valeur

void	sort_four(t_data *input)
{
	int	mini;

	mini = min(input->taba, input->sizea);
	if (position(input->taba, input->sizea, mini) == 1)
		rotate_a(input->taba, input->sizea);
	if (position(input->taba, input->sizea, mini) == 2)
	{
		rotate_a(input->taba, input->sizea);
		rotate_a(input->taba, input->sizea);
	}
	else if (position(input->taba, input->sizea, mini) == 3)
		reverse_ra(input->taba, input->sizea);
	if (sorted_yn(input, input->sizea) == 0)
		return ;
	push_b(input);
	sort_three(input->taba, 3);
	push_a(input);
}

void	sort_five(t_data *input)
{
	int	mini;

	mini = min(input->taba, input->sizea);
	if (position(input->taba, input->sizea, mini) == 1)
		rotate_a(input->taba, input->sizea);
	else if (position(input->taba, input->sizea, mini) == 2)
	{
		rotate_a(input->taba, input->sizea);
		rotate_a(input->taba, input->sizea);
	}
	else if (position(input->taba, input->sizea, mini) == 3)
	{
		reverse_ra(input->taba, input->sizea);
		reverse_ra(input->taba, input->sizea);
	}
	else if (position(input->taba, input->sizea, mini) == 4)
		reverse_ra(input->taba, input->sizea);
	if (sorted_yn(input, input->sizea) == 0)
		return ;
	push_b(input);
	sort_four(input);
	push_a(input);
}

void	sort_small(t_data *input)
{
	if (input->sizea <= 3)
		sort_three(input->taba, input->sizea);
	if (input->sizea == 4)
		sort_four(input);
	if (input->sizea == 5)
		sort_five(input);
	freestruct(input);
	free(input->index);
}
