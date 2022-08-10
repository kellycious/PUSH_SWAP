/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:21:14 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/10 19:56:38 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int		*taba;
	int		*tabb;
	int		i;
	int		size;
	t_data	input;

	taba = 0;
	tabb = 0;
	i = 0;
	size = ac - 1;
	if (!initstruct(&input, size))
		return (0);
	stack_a(&input, av);
	if (tab_ok(size, av, &input) == 0)
	{
		if (sorted_yn(&input, size) == 1)
		{
			copacopy(&input);
			if (size <= 5)
			{
				sort_small(&input);
				free(input.copa);
				free(input.index);
			}
			else
				sortfinal(&input);
		}
/*		while (i < size)
		{
			printf("%d\n", input.taba[i]);
			i++;
		}*/
	}
	return (free(input.taba), free(input.tabb), 0);
}
