/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:15:47 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/20 10:12:33 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	sb(t_stack **b)
{
	t_stack	*first;
	t_stack	*second;
	int		tmp;

	if ((*b) == NULL || (*b)->next == NULL)
		return ;
	first = (*b);
	second = (*b)->next;
	if (first->i > second->i)
	{
		tmp = first->i;
		first->i = second->i;
		second->i = tmp;
	}
}
