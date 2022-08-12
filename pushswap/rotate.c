/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 23:32:40 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/12 00:46:40 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push.h"

// shift up all int by 1, first int becomes last one

void	rotate_a(int *taba, int size)
{
	int	i;

	i = 0;
	while (taba[i] != taba[size - 1])
	{
		ft_swap(&taba[i], &taba[i + 1]);
		i++;
	}
	ft_putstr_fd("ra\n", 1);
}

void	rotate_b(int *tabb, int size)
{
	int	i;

	i = 0;
	while (tabb[i] != tabb[size - 1])
	{
		ft_swap(&tabb[i], &tabb[i + 1]);
		i++;
	}
	ft_putstr_fd("rb\n", 1);
}

void	rotate_rr(int *taba, int *tabb, int size)
{
	int	i;

	i = 0;
	while (taba[i] != taba[size - 1])
	{
		ft_swap(&taba[i], &taba[i + 1]);
		i++;
	}
	i = 0;
	while (tabb[i] != tabb[size - 1])
	{
		ft_swap(&tabb[i], &tabb[i + 1]);
		i++;
	}
	ft_putstr_fd("rr\n", 1);
}
