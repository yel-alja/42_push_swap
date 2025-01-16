/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:03:30 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/15 20:13:56 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	small_great(t_stack *head, int value)
{
	int		tmp;
	t_stack	*b;

	tmp = -1;
	b = head;
	while (head)
	{
		if (head->i < value)
		{
			if (tmp == -1 || head->i > tmp)
				tmp = head->i;
		}
		head = head->next;
	}
	if (tmp != -1)
		return (tmp);
	return (biggest_number(b));
}

int	great_small(t_stack *a, int i)
{
	int		tmp;
	t_stack	*head;

	tmp = -1;
	head = a;
	while (a)
	{
		if (a->i > i)
		{
			if (tmp == -1 || a->i < tmp)
				tmp = a->i;
		}
		a = a->next;
	}
	if (tmp == -1)
		return (small_number(head));
	return (tmp);
}
