/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 09:59:02 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/23 11:37:32 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_stack **a)
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
	write(1, "sa\n", 3);
}
