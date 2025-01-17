/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 15:59:32 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/17 08:32:08 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_stack
{
	int				i;
	struct s_stack	*next;
}					t_stack;

long long			ft_atoi(char *str);
char				**ft_split(char *s, char c);
void				free_s(char **c);
t_stack				*lst_new(int i);
void				add_to_stack(t_stack **a, char *str, char **s);
void				arg_lst(t_stack **a, char **argv, int argc);
void				is_valid(char **str, t_stack *a);
void				is_valid2(t_stack *a);
int					list_lengh(t_stack *a);
void				free_list(t_stack *list);

void				sort_three(t_stack **a);
void				sort_list(t_stack **a, t_stack **b);
void				sort_five(t_stack **a , t_stack **b);

void				sb(t_stack **b);
void				sa(t_stack **a);
void				ss(t_stack **a, t_stack **b);

void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);

void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);

void				rra(t_stack **a);
void				rrb(t_stack **a);
void				rrr(t_stack **a, t_stack **b);

// remove

int					small_number(t_stack *a);
int					biggest_number(t_stack *a);
int					wich_half(t_stack *a, int i);
int					small_great(t_stack *b, int i);
void				turk_algo(t_stack **a, t_stack **b);
int					great_small(t_stack *a, int i);
void				sort_four(t_stack **a, t_stack **b);
int					count_moves(t_stack *b, int target);
