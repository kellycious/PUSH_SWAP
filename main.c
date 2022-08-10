/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:21:14 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/10 20:55:03 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int		*taba;
	int		*tabb;
	t_data	input;

	taba = 0;
	tabb = 0;
	if (!initstruct(&input, ac - 1))
		return (0);
	stack_a(&input, av);
	if (tab_ok(ac - 1, av, &input) == 0)
	{
		if (sorted_yn(&input, ac - 1) == 1)
		{
			copacopy(&input);
			if (ac - 1 <= 5)
			{
				sort_small(&input);
				free(input.copa);
				free(input.index);
			}
			else
				sortfinal(&input);
		}
	}
	return (free(input.taba), free(input.tabb), 0);
}
