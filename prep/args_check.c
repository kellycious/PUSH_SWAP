/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:12:32 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/11 00:00:17 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

// check if there are only nb in args input and no alpha 

int	no_alpharg(char **args)
{
	int	i;
	int	j;

	i = 1;
	while (args[i])
	{
		j = 0;
		if (args[i][0] == '+' || args[i][0] == '-')
			j++;
		if ((ft_isdigit(args[i][j])) == 0)
			return (1);
		while (args[i][j])
		{
			if ((ft_isdigit(args[i][j])) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

// check if both are ok(nb only + no overflow), print error if needed

int	args_ok(char **input)
{
	int	i;

	i = 1;
	if (no_alpharg(input) == 1)
	{
		write(2, "ERROR: Pls only input numbers\n", 31);
		return (1);
	}
	while (input[i])
	{
		if (ft_atoi(input[i]) > INT_MAX)
		{
			write(2, "ERROR: You have input a nb > INT_MAX or < INT_MIN\n", 51);
			return (1);
		}
		i++;
	}
	return (0);
}
