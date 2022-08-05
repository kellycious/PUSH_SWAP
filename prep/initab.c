/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:50:39 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/05 03:22:00 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

// mettre les nb input dans un tableau d'int

int	*stack_a(int size, char **input)
{
	int	i;
	int	j;
	int	*taba;

	i = 1;
	j = 0;
	taba = malloc(sizeof(int) * size);
	if (!taba)
		return (0);
	while (i <= size)
	{
		taba[j] = ft_atoi(input[i]);
		i++;
		j++;
	}
	return (taba);
}

// check les doublons dans tableau

int	check_dbl(int size, int *taba)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{			
			if (taba[i] == taba[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

// si args no overflow ni caractere alpha, creer tableau + check doublon

int	tab_ok(int size, char **input, int *taba)
{
	if (size < 1 || args_ok(input) == 1)
		return (1);
	taba = stack_a(size, input);
	if (!taba)
		return (1);
	if (check_dbl(size, taba) == 1)
	{
		free(taba);
		write (2, "ERROR: You have input 2 same nb\n", 33);
		return (1);
	}
	return (0);
}

// creer une stack B vide de la mm size que stack A, only if input OK

int	*stack_b(int size, char **input, int *taby)
{
	int	*tabb;

	if (tab_ok(size, input, taby) == 1)
		return (0);
	tabb = malloc(sizeof(int) * size);
	if (!tabb)
		return (0);
	return (tabb);
}
