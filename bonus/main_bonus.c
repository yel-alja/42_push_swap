/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:19:50 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/19 11:06:10 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack	*lst_new(int i, t_stack **a)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (new_node == NULL)
	{
		free_list(*a);
		exit(1);
	}
	new_node->i = i;
	new_node->next = NULL;
	return (new_node);
}

int	is_sorted(t_stack *a)
{
	t_stack	*current;

	if (a == NULL || a->next == NULL)
		return (1);
	current = a;
	while (current->next)
	{
		if (current->i > current->next->i)
			return (0);
		current = current->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	a = NULL;
	b = NULL;
	if (argc >= 2)
		arg_lst(&a, argv, argc);
	else
		return (0);
	checker(&a, &b);
	if (is_sorted(a) == 1)
	{
		free_list(a);
		return (0);
	}
	free_list(a);
}
