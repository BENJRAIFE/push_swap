/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bbenjrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:26:49 by bbenjrai          #+#    #+#             */
/*   Updated: 2024/04/01 22:15:06 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct double_list
{
	int					content;
	struct double_list	*next;
	int					index;

}						t_stack;

// check
char					**ft_split(char const *s, char c);
void					isvalid(char **string);
char					*tstring(char **av, int len);
int						ft_isdigit(int c);
int						ft_strlen(char *str);
long					ft_atoi(char *str);
void					is_empty(char **av);
int						ft_strlen(char *str);
char					*tstring(char **av, int len);
void					free2(char **str);
char					**free_split(char **str, int i);
int						get_position(int *arr, char *str, int ac);
void					ft_error(int status);
void					check_repeat(char **string);
void					is_max_min(char **string);
int						is_sorted(char **string);
int						freenull(char *str);

// push_t_stack
void					ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack					*ft_lstnew(int content, int pos);
t_stack					*tail(t_stack *list);
int						*stock_arr(char **str);
void					sort_arr(int *arr, int ac);
void					push_stack(int *arr, char **str, t_stack **a, int ac);
int						ft_lstsize(t_stack **lst);

// moves
void					sa(t_stack **lst);
void					sb(t_stack **lst);
void					ss(t_stack **lst1, t_stack **lst2);
void					ra(t_stack **list);
void					rb(t_stack **b);
void					rr(t_stack **a, t_stack **b);
void					rra(t_stack **lst);
void					rrb(t_stack **b);
void					rrr(t_stack **a, t_stack **b);
void					pa(t_stack **a, t_stack **b);
void					pb(t_stack **a, t_stack **b);
t_stack					*before_last(t_stack *list);
int						position(t_stack *a, int conte);
int						max(t_stack **a);

// sort
void					sort_3(t_stack **a);
void					sort_5(t_stack **a, t_stack **b);
void					sort_100(t_stack **a, t_stack **b);

#endif
