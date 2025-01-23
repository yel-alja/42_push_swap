/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 09:26:22 by yel-alja          #+#    #+#             */
/*   Updated: 2025/01/23 10:06:25 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				i;
	struct s_stack	*next;
}					t_stack;

void				free_list(t_stack *list);
void				free_s(char **c);
char				*get_next_line(int fd);
void				arg_lst(t_stack **a, char **argv, int argc);
char				**ft_split(char *s, char c);
long long			ft_atoi(char *str);
t_stack				*lst_new(int i, t_stack **a);
void				is_valid(char **str, t_stack *a);
void				is_valid2(t_stack *a);
int					is_sorted(t_stack *a);
void				checker(t_stack **a, t_stack **b);
char				*get_next_line(int fd);
char				*ft_strdup(char *str);
char				*find_line(char *str);
size_t				ft_strlen(char *str);
char				*ft_strjoin(char *s1, char *s2);
void				*ft_memcpy(void *dst, const void *src, size_t n);
char				*ft_strchr(char *s, int c);

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

void				add_to_stack(t_stack **a, char *str, char **s);
#endif