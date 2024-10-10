/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bbenjrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:26:25 by bbenjrai          #+#    #+#             */
/*   Updated: 2024/04/02 12:02:28 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack **lst)
{
	t_stack	*tmp;
	t_stack	*b;

	if (lst != NULL && (*lst) != NULL && (*lst)->next != NULL)
	{
		tmp = (*lst)->next;
		b = (*lst);
		(*lst)->next = tmp->next;
		tmp->next = b;
		(*lst) = tmp;
		write(1, "sb\n", 3);
	}
}

void	sa(t_stack **lst)
{
	t_stack	*tmp;
	t_stack	*a;

	if (lst != NULL && (*lst) != NULL && (*lst)->next != NULL)
	{
		tmp = (*lst)->next;
		a = (*lst);
		(*lst)->next = tmp->next;
		tmp->next = a;
		(*lst) = tmp;
		write(1, "sa\n", 3);
	}
}

void	ss(t_stack **lst1, t_stack **lst2)
{
	if (lst1 != NULL && (*lst1) && lst2 != NULL && (*lst2) != NULL)
	{
		sa(lst1);
		sb(lst2);
		write(1, "ss\n", 3);
	}
}

void	rrr(t_stack **a, t_stack **b)
{
	if (a != NULL && (*a) != NULL && b != NULL && (*b) != NULL)
	{
		rra(a);
		rrb(b);
		write(1, "rrr\n", 4);
	}
}
