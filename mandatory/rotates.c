/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bbenjrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:27:21 by bbenjrai          #+#    #+#             */
/*   Updated: 2024/04/02 11:59:38 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **list)
{
	t_stack	*last;
	t_stack	*temp;

	if (list != NULL && *list != NULL && (*list)->next != NULL)
	{
		last = tail(*list);
		temp = (*list)->next;
		last->next = (*list);
		(*list)->next = NULL;
		(*list) = temp;
		write(1, "ra\n", 3);
	}
}

void	rb(t_stack **b)
{
	t_stack	*lst;
	t_stack	*temp;

	if (b != NULL && *b != NULL && (*b)->next != NULL)
	{
		lst = tail(*b);
		temp = (*b)->next;
		lst->next = (*b);
		(*b)->next = NULL;
		(*b) = temp;
		write(1, "rb\n", 3);
	}
}

void	rr(t_stack **a, t_stack **b)
{
	if (a != NULL && (*a) && b != NULL && (*b) != NULL)
	{
		ra(a);
		rb(b);
		write(1, "rr\n", 3);
	}
}

void	rra(t_stack **lst)
{
	t_stack	*last;
	t_stack	*bef_last;

	if (lst != NULL && *lst != NULL && (*lst)->next != NULL)
	{
		last = tail(*lst);
		bef_last = before_last(*lst);
		last->next = (*lst);
		(*lst) = last;
		bef_last->next = NULL;
		write(1, "rra\n", 4);
	}
}

void	rrb(t_stack **b)
{
	t_stack	*last;
	t_stack	*bef_last;

	if (b != NULL && *b != NULL && (*b)->next != NULL)
	{
		last = tail(*b);
		bef_last = before_last(*b);
		last->next = (*b);
		(*b) = last;
		bef_last->next = NULL;
		write(1, "rrb\n", 4);
	}
}
