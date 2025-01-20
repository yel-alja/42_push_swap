/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:00:46 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/20 10:11:46 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	rb(t_stack **b)
{
	t_stack	*current;
	int		tmp;

	if ((*b) == NULL || (*b)->next == NULL)
		return ;
	current = NULL;
	current = (*b);
	tmp = (*b)->i;
	while (current->next)
	{
		current->i = current->next->i;
		current = current->next;
	}
	current->i = tmp;
}
