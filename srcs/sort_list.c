/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 10:10:03 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/23 11:37:36 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_list(t_stack **a, t_stack **b)
{
	int	lengh_a;

	lengh_a = list_lengh(*a);
	if (lengh_a == 2)
		sa(a);
	else if (lengh_a == 3)
		sort_three(a);
	else if (lengh_a == 4)
		sort_four(a, b);
	else if (lengh_a == 5)
		sort_five(a, b);
	else if (lengh_a > 4)
		turk_algo(a, b);
}

void	sort_three(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = (*a);
	second = (*a)->next;
	third = second->next;
	if ((first->i > second->i) && (first->i < third->i))
		sa(a);
	else if ((first->i < second->i) && (third->i < first->i))
		rra(a);
	else if ((first->i < third->i) && (second->i > third->i))
	{
		rra(a);
		sa(a);
	}
	else if ((first->i > third->i) && (second->i < third->i))
		ra(a);
	else if ((first->i > second->i) && (second->i > third->i))
	{
		sa(a);
		rra(a);
	}
}

void	sort_four(t_stack **a, t_stack **b)
{
	int	tmp;

	tmp = small_number(*a);
	while ((*a)->i != tmp)
	{
		if (wich_half(*a, tmp) == 1)
			ra(a);
		else if (wich_half(*a, tmp) == 2)
			rra(a);
	}
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	tmp;
	int	i;

	i = 2;
	while (i--)
	{
		tmp = small_number(*a);
		while ((*a)->i != tmp)
		{
			if (wich_half(*a, tmp) == 1)
				ra(a);
			else if (wich_half(*a, tmp) == 2)
				rra(a);
		}
		pb(a, b);
	}
	sort_three(a);
	pa(a, b);
	pa(a, b);
}
