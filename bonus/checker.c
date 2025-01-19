/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 11:04:33 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/19 21:04:21 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
	return (s1[i] - s2[i]);
}
void chek_a(t_stack *a)
{
    if(is_sorted(a) == 0)
        write(1, "OK\n" ,3);    
    else
        write(1, "KO\n" ,3);
}
void checker(t_stack **a, t_stack **b)
{
	char *line;
	while ((line = get_next_line()))
	{
		if (!ft_strcmp(line, "sa\n"))
			sa(a);
		else if (!ft_strcmp(line, "sb\n"))
			sb(b);
		else if (!ft_strcmp(line, "ss\n"))
			ss(a, b);
		else if (!ft_strcmp(line, "ra\n"))
			ra(a);
		else if (!ft_strcmp(line, "rb\n"))
			rb(b);
		else if (!ft_strcmp(line, "rr\n"))
			rr(a ,b);
		else if (!ft_strcmp(line, "rra\n"))
			rra(a);
		else if (!ft_strcmp(line, "rrb\n"))
			rrb(b);
		else if (!ft_strcmp(line, "rrr\n"))
			rrr(a, b);
		else if (!ft_strcmp(line, "pa\n"))
			pa(a, b);
		else if (!ft_strcmp(line, "pb\n"))
			pb(a, b);
        free(line);         
		line = get_next_line();
	}
    chek_a(*a);
}
