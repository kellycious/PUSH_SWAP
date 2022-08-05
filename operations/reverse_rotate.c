/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:38:34 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/05 03:21:46 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

// shift down all int by 1, last int becomes first one

void	reverse_ra(int *taba, int size)
{
	int	i;

	i = size - 1;
	while (taba[i] != taba[0])
	{
		ft_swap(&taba[i], &taba[i - 1]);
		i--;
	}
	ft_putstr_fd("rra\n", 1);
}

void	reverse_rb(int *tabb, int size)
{
	int	i;

	i = size - 1;
	while (tabb[i] != tabb[0])
	{
		ft_swap(&tabb[i], &tabb[i - 1]);
		i--;
	}
	ft_putstr_fd("rrb\n", 1);
}

void	reverse_rr(int *taba, int *tabb, int size)
{
	int	i;

	i = size - 1;
	while (taba[i] != taba[0])
	{
		ft_swap(&taba[i], &taba[i - 1]);
		i--;
	}
	i = size - 1;
	while (tabb[i] != tabb[0])
	{
		ft_swap(&tabb[i], &tabb[i - 1]);
		i--;
	}
	ft_putstr_fd("rrr\n", 1);
}
