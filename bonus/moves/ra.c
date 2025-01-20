/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:36:42 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/20 10:11:32 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ra(t_stack **a)
{
	t_stack	*current;
	int		tmp;

	if ((*a) == NULL || (*a)->next == NULL)
		return ;
	current = (*a);
	tmp = (*a)->i;
	while (current->next)
	{
		current->i = current->next->i;
		current = current->next;
	}
	current->i = tmp;
}
