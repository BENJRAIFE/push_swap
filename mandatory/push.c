/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bbenjrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:31:13 by bbenjrai          #+#    #+#             */
/*   Updated: 2024/04/01 16:36:13 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*head_a;
	t_stack	*head_b;

	if (b != NULL && (*b) != NULL)
	{
		head_a = (*b);
		head_b = (*b)->next;
		(*b)->next = (*a);
		(*a) = head_a;
		(*b) = head_b;
		write(1, "pa\n", 3);
	}
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*head_b;
	t_stack	*head_a;

	if (a != NULL && (*a) != NULL)
	{
		head_b = (*a);
		head_a = (*a)->next;
		(*a)->next = (*b);
		(*b) = head_b;
		(*a) = head_a;
		write(1, "pb\n", 3);
	}
}
