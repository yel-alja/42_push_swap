/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:28:11 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/23 11:37:38 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_two(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;
	int		tmp;

	first = (*a);
	second = (*a)->next;
	if (first->i > second->i)
	{
		tmp = first->i;
		first->i = second->i;
		second->i = tmp;
	}
}

void	ss(t_stack **a, t_stack **b)
{
	swap_two(a);
	swap_two(b);
	write(1, "ss\n", 3);
}
