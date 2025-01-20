/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:26:24 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/20 11:02:32 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	count_moves(t_stack *b, int target)
{
	int	moves;
	int	index;
	int	len;

	moves = 0;
	index = 0;
	len = list_lengh(b);
	if ((wich_half(b, target)) == 1)
	{
		while (b && (b->i != target))
		{
			moves++;
			b = b->next;
		}
	}
	else if ((wich_half(b, target)) == 2)
	{
		while (b && (b->i != target))
		{
			index++;
			b = b->next;
		}
		moves = len - index;
	}
	return (moves);
}
