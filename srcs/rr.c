/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:04:03 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/23 11:37:21 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_lst(t_stack **a)
{
	t_stack	*current;
	int		tmp;

	current = NULL;
	current = (*a);
	tmp = (*a)->i;
	while (current->next)
	{
		current->i = current->next->i;
		current = current->next;
	}
	current->i = tmp;
}

void	rr(t_stack **a, t_stack **b)
{
	rotate_lst(a);
	rotate_lst(b);
	write(1, "rr\n", 3);
}
