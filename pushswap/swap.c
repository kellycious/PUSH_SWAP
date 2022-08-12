/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:49:45 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/12 00:46:48 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push.h"

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = 0;
	swap = *a;
	*a = *b;
	*b = swap;
}

// swap 2 first int of each stack, ex: tab[0] with tab[1]

void	swap_a(int *taba, int size)
{
	if (size >= 1)
	{
		ft_swap(&taba[0], &taba[1]);
		ft_putstr_fd("sa\n", 1);
	}
}

void	swap_b(int *tabb, int size)
{
	if (size >= 1)
	{
		ft_swap(&tabb[0], &tabb[1]);
		ft_putstr_fd("sb\n", 1);
	}
}

// swap 2 first int of each stack at the same time

void	swap_ss(int *taba, int *tabb, int size)
{
	if (size >= 1)
	{
		ft_swap(&taba[0], &taba[1]);
		ft_swap(&tabb[0], &tabb[1]);
		ft_putstr_fd("ss\n", 1);
	}
}
