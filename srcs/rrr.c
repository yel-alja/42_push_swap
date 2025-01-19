/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:08:38 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/19 21:17:49 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	r_r(t_stack **a)
{
	t_stack	*current;
	t_stack	*stack;

	current = (*a);
	while (current->next)
	{
		stack = current;
		current = current->next;
	}
	current->next = (*a);
	stack->next = NULL;
	(*a) = current;
}

void	rrr(t_stack **a, t_stack **b)
{
	r_r(a);
	r_r(b);
	write(1, "rrr\n", 4);
}
