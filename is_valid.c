/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:19:17 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/13 10:03:34 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	_is_digit(char **str)
{
	int	i;
	int	j;

	j = 0;
	while (str[j])
	{
		i = 0;
		if ((str[j][i] == '-' || str[j][i] == '+') && (str[j][i + 1] >= '0'
				&& str[j][i + 1] <= '9'))
			i++;
		while (str[j][i])
		{
			if (str[j][i] < '0' || str[j][i] > '9')
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

void	is_valid(char **str, t_stack *a)
{
	if (_is_digit(str) == 0)
	{
		free_s(str);
		free_list(a);
		write(2, "Error\n", 6);
		exit(1);
	}
}

void	is_valid2(t_stack *a)
{
	t_stack	*current;
	t_stack	*tmp;

	current = a;
	while (current)
	{
		tmp = current->next;
		while (tmp)
		{
			if (tmp->i == current->i)
			{
				free_list(a);
				write(2, "Error\n", 6);
				exit(1);
			}
			tmp = tmp->next;
		}
		current = current->next;
	}
}
