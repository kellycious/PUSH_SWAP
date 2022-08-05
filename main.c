/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:21:14 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/05 02:44:19 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	main(int ac, char **av)
{
	int		*taba;
	int		*tabb;
	int		i;
	int		size;
	t_data	input;

	taba = 0;
	i = 0;
	size = ac - 1;
	if (tab_ok(size, av, taba) == 0)
	{
		taba = stack_a(size, av);
		if (sorted_yn(taba, size) == 1)
		{
			tabb = stack_b(size, av, taba);
			initstruct(&input, taba, tabb, size);
			copacopy(&input, taba);
			if (size <= 5)
				sort_small(&input);
			else
				sortfinal(&input);
		}
	}
}
