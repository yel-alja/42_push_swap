/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 09:40:16 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/23 11:37:15 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	list_lengh(t_stack *a)
{
	int	i;

	i = 0;
	while (a)
	{
		i++;
		a = a->next;
	}
	return (i);
}

int	small_number(t_stack *a)
{
	int	small;

	small = a->i;
	while (a)
	{
		if (a->i < small)
			small = a->i;
		a = a->next;
	}
	return (small);
}

int	biggest_number(t_stack *a)
{
	int	biggest;

	biggest = a->i;
	while (a)
	{
		if (a->i > biggest)
			biggest = a->i;
		a = a->next;
	}
	return (biggest);
}

int	wich_half(t_stack *a, int i)
{
	int	lengh;
	int	index;

	index = 0;
	lengh = list_lengh(a);
	while (a)
	{
		if (a->i == i)
			break ;
		index++;
		a = a->next;
	}
	if (index <= lengh / 2)
		return (1);
	else if (index > lengh / 2)
		return (2);
	return (0);
}
