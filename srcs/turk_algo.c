/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:21:03 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/19 21:18:13 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	data_move(t_stack *a, t_stack *b)
{
	t_stack	*head_a;
	t_stack	*head_b;
	int		moves;
	int		i;
	int		count;

	head_a = a;
	head_b = b;
	moves = 5500;
	while (a)
	{
		count = count_moves(head_a, a->i) + count_moves(head_b, small_great(b,
					a->i));
		if (count < moves)
		{
			moves = count;
			i = a->i;
		}
		a = a->next;
	}
	return (i);
}

void	node_top(t_stack **a, t_stack **b, int node_data)
{
	int	s;

	s = small_great((*b), node_data);
	if (node_data != (*a)->i && s != (*b)->i)
	{
		while (wich_half(*a, node_data) == 1 && wich_half(*b, s) == 1)
			rr(a, b);
		while (wich_half(*a, node_data) == 2 && wich_half(*b, s) == 2)
			rrr(a, b);
	}
	while (node_data != (*a)->i)
	{
		if (wich_half(*a, node_data) == 1)
		{
			while ((*a)->i != node_data)
				ra(a);
		}
		else if (wich_half(*a, node_data) == 2)
		{
			while ((*a)->i != node_data)
				rra(a);
		}
	}
}

void	push_b(t_stack **a, t_stack **b)
{
	int	node_data;
	int	s;

	while (list_lengh((*a)) >= 4)
	{
		node_data = data_move(*a, *b);
		node_top(a, b, node_data);
		s = small_great((*b), node_data);
		if (wich_half((*b), s) == 1)
		{
			while ((*b)->i != s)
				rb(b);
		}
		else if (wich_half((*b), s) == 2)
		{
			while ((*b)->i != s)
				rrb(b);
		}
		pb(a, b);
	}
}

void	small_top(t_stack **a)
{
	int	small;

	small = small_number(*a);
	while ((*a)->i != small)
	{
		if (wich_half(*a, small) == 1)
			ra(a);
		else if (wich_half(*a, small) == 2)
			rra(a);
	}
}

void	turk_algo(t_stack **a, t_stack **b)
{
	int	g;
	
	pb(a, b);
	pb(a, b);
	push_b(a, b);
	sort_three(a);
	while ((*b))
	{
		g = great_small((*a), (*b)->i);
		if (wich_half((*a), g) == 1)
		{
			while ((*a)->i != g)
				ra(a);
		}
		else if (wich_half((*a), g) == 2)
		{
			while ((*a)->i != g)
				rra(a);
		}
		pa(a, b);
	}
	small_top(a);
}

