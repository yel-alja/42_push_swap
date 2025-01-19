/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:03:30 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/19 21:18:09 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	small_great(t_stack *head, int value)
{
	long		tmp;
	t_stack	*b;

	tmp = -2147483649;
	b = head;
	while (head)
	{
		if (head->i < value)
		{
			if (tmp == -2147483649 || head->i > tmp)
				tmp = head->i;
		}
		head = head->next;
	}
	if (tmp != -2147483649)
		return ((int)tmp);
	return (biggest_number(b));
}


int	great_small(t_stack *a, int i)
{
	long		tmp;
	t_stack	*head;

	tmp = 2147483648;
	head = a;
	while (a)
	{
		if (a->i > i)
		{
			if (tmp == 2147483648 || a->i < tmp)
				tmp = a->i;
		}
		a = a->next;
	}
	if (tmp == 2147483648)
		return (small_number(head));
	return ((int)tmp);
}
