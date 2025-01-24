/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 09:59:02 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/20 10:09:52 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	sa(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;
	int		tmp;

	if ((*a) == NULL || (*a)->next == NULL)
		return ;
	first = (*a);
	second = (*a)->next;
	tmp = first->i;
	first->i = second->i;
	second->i = tmp;
}
