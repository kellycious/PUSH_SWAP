/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:09:44 by khuynh            #+#    #+#             */
/*   Updated: 2022/08/21 18:40:11 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PUSH_H
# define PUSH_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_data
{
	int	*taba;
	int	*tabb;
	int	*copa;
	int	*index;
	int	sizea;
	int	sizeb;
}	t_data;

int		no_alpharg(char **args);
int		args_ok(char **input);
int		*stack_a(t_data *data, char **input);
int		*stack_b(int size, char **input, int *taby);
int		check_dbl(int size, t_data *data);
int		tab_ok(int size, char **input, t_data *data);
void	freestruct(t_data *data);

void	ft_swap(int *a, int *b);
void	swap_a(int *taba, int size);
void	swap_b(int *tabb, int size);
void	swap_ss(int *taba, int *tabb, int size);

void	rotate_a(int *taba, int size);
void	rotate_b(int *tabb, int size);
void	rotate_rr(int *taba, int *tabb, int size);

void	reverse_ra(int *taba, int size);
void	reverse_rb(int *tabb, int size);
void	reverse_rr(int *taba, int *tabb, int size);

int		initstruct(t_data *input, int size);

int		add2taba(t_data *input);
int		delete4tabb(t_data *input);
int		add2tabb(t_data *input);
int		delete4taba(t_data *input);
int		push_b(t_data *input);
int		push_a(t_data *input);

int		sorted_yn(t_data *input, int size);
int		max(int *taba, int size);
int		min(int *taba, int size);
int		position(int *tab, int size, int index);

void	sort_three(int *taba, int size);
void	sort_four(t_data *input);
void	sort_five(t_data *input);
void	sort_small(t_data *input);

int		maxbit(t_data *input);
void	sortfinal(t_data *input);

void	sort_arrayindex(t_data *input);
void	indexmatch(t_data *input);
void	copacopy(t_data *input);

void	sorter(t_data input);

#	endif