/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:21:03 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/16 08:32:09 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_moves(t_stack *b, int target)
{
	int	moves;
	int	index;
	int	len;
	int	half;

	moves = 0;
	index = 0;
	len = list_lengh(b);
	half = wich_half(b, target);
	if (half == 1)
	{
		while (b && (b->i != target))
		{
			index++;
			b = b->next;
		}
		moves = index;
	}
	else if (half == 2)
	{
		while (b && (b->i != target))
		{
			index++;
			b = b->next;
		}
		moves = len - index;
	}
	return (moves);
}

int	node_move(t_stack *a, t_stack *b, int target)
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
		if (target == 1)
		{
			count = count_moves(head_a, a->i) + count_moves(head_b,
					small_great(b, a->i));
			if (count < moves)
			{
				moves = count;
				i = a->i;
			}
			a = a->next;
		}
	}
	return (i);
}

void	push_b(t_stack **a, t_stack **b, int s)
{
	int	node_data;

	while (list_lengh((*a)) >= 4)
	{
		node_data = node_move(*a, *b, 1);
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
		s = small_great((*b), (*a)->i);
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

void	turk_algo(t_stack **a, t_stack **b)
{
	int	s;
	int	g;
	int	small;

	s = 0;
	pb(a, b);
	pb(a, b);
	push_b(a, b, s);
	sort_three(a);
	while ((*b))
	{
		// int node_data = node_move(*b,*a , 1);
		// while(node_data != (*b)->i)
		// {
		// 	if(wich_half(*b ,node_data) == 1)
		// 	{
		// 		while((*b)->i != node_data)
		// 			rb(b);
		// 	}
		// 	else if (wich_half(*b ,node_data) == 2)
		// 	{
		// 		while((*b)->i != node_data)
		// 			rrb(b);
		// 	}
		// }
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
	small = small_number(*a);
	while ((*a)->i != small)
	{
		if (wich_half(*a, small) == 1)
			ra(a);
		else if (wich_half(*a, small) == 2)
			rra(a);
	}
}
