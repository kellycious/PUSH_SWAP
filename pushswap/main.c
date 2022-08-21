/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:21:14 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/21 18:40:58 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	sorter(t_data input)
{
	int	size;

	size = input.sizea;
	if (sorted_yn(&input, size) == 1)
	{
		copacopy(&input);
		if (size <= 5)
			sort_small(&input);
		else
			sortfinal(&input);
	}
	else
	{
		freestruct(&input);
		free(input.index);
	}
}

int	main(int ac, char **av)
{
	int		*taba;
	int		*tabb;
	t_data	input;

	taba = 0;
	tabb = 0;
	if (ac <= 2)
		return (0);
	if (!initstruct(&input, ac - 1))
		return (0);
	stack_a(&input, av);
	if (tab_ok(ac - 1, av, &input) == 0)
		sorter(input);
	return (0);
}
