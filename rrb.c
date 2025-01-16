/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 22:40:24 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/15 20:16:00 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack **a)
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
	write(1, "rrb\n", 4);
}
