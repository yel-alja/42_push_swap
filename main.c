/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 09:29:34 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/15 20:28:45 by yel-alja         ###   ########.fr       */
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
	while (a && a->next && a->i < a->next->i)
		a = a->next;
	if (a == NULL)
		return (1);
	return (0);
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
	// printf("%d",is_sorted(a));
	if (is_sorted(a) == 1)
	{
		free_list(a);
		return (0);
	}
	sort_list(&a, &b);
	// pb(&a,&b);
	// pb(&a,&b);
	// print_a(a);
	free_list(a);
}
