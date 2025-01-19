/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 15:30:18 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/19 21:16:38 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	add_to_stack(t_stack **a, char *str, char **s)
{
	t_stack		*tmp;
	t_stack		*current;
	long long	l;

	l = ft_atoi(str);
	if (l > 2147483647 || l < -2147483648)
	{
		free_list((*a));
		free_s(s);
		write(2, "Error\n", 6);
		exit(1);
	}
	tmp = lst_new(l, a);
	if ((*a) == NULL)
		(*a) = tmp;
	else
	{
		current = *a;
		while (current->next)
			current = current->next;
		current->next = tmp;
	}
}

void	arg_lst(t_stack **a, char **argv, int argc)
{
	char	**str;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		str = ft_split(argv[i], ' ');
		is_valid(str, *a);
		j = 0;
		while (str[j])
		{
			add_to_stack(a, str[j], str);
			j++;
		}
		free_s(str);
		is_valid2(*a);
		i++;
	}
}
