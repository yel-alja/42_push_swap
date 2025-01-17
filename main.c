/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 09:29:34 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/16 11:23:59 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*lst_new(int i)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (new_node == NULL)
		return (NULL);
	new_node->i = i;
	new_node->next = NULL;
	return (new_node);
}

void	free_list(t_stack *list)
{
	t_stack	*tmp;

	while (list)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}
	free(list);
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
	if (is_sorted(a) == 1)
	{
		free_list(a);
		return (0);
	}
	sort_list(&a, &b);
	free_list(a);
}
