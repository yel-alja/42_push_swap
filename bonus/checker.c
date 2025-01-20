/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 11:04:33 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/20 10:54:11 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_error(char *line, t_stack *a)
{
	write(2, "Error\n", 6);
	free(line);
	free_list(a);
	exit(1);
}

void	check_line(char *line, t_stack **a, t_stack **b)
{
	if (!ft_strcmp(line, "sa"))
		sa(a);
	else if (!ft_strcmp(line, "sb"))
		sb(b);
	else if (!ft_strcmp(line, "ss"))
		ss(a, b);
	else if (!ft_strcmp(line, "ra"))
		ra(a);
	else if (!ft_strcmp(line, "rb"))
		rb(b);
	else if (!ft_strcmp(line, "rr"))
		rr(a, b);
	else if (!ft_strcmp(line, "rra"))
		rra(a);
	else if (!ft_strcmp(line, "rrb"))
		rrb(b);
	else if (!ft_strcmp(line, "rrr"))
		rrr(a, b);
	else if (!ft_strcmp(line, "pa"))
		pa(a, b);
	else if (!ft_strcmp(line, "pb"))
		pb(a, b);
	else
		ft_error(line, *a);
}

void	checker(t_stack **a, t_stack **b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		check_line(line, a, b);
		free(line);
		line = get_next_line(0);
	}
	if (is_sorted(*a) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
