/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 22:40:24 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/20 10:12:04 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	rrb(t_stack **a)
{
	t_stack	*current;
	t_stack	*stack;

	if ((*a) == NULL || (*a)->next == NULL)
		return ;
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
