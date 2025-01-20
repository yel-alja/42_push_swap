/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:00:46 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/20 11:02:51 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rb(t_stack **b)
{
	t_stack	*current;
	int		tmp;

	current = NULL;
	current = (*b);
	tmp = (*b)->i;
	while (current->next)
	{
		current->i = current->next->i;
		current = current->next;
	}
	current->i = tmp;
	write(1, "rb\n", 3);
}
