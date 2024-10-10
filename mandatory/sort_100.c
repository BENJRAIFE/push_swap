/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bbenjrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:28:09 by bbenjrai          #+#    #+#             */
/*   Updated: 2024/04/01 16:35:48 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_stack *a, int j, int p)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->index <= j || a->index <= j + p)
			break ;
		a = a->next;
		i++;
	}
	return (i);
}

void	push_a(t_stack **a, t_stack **b)
{
	int	i;
	int	len;

	i = 0;
	len = ft_lstsize(b);
	while (*b)
	{
		if (position(*b, max(b)) == 0)
		{
			pa(a, b);
			i++;
		}
		if (position(*b, max(b)) > ft_lstsize(b) / 2)
			rrb(b);
		else
			rb(b);
	}
}

void	sort(t_stack **a, t_stack **b, int p)
{
	int	len;
	int	i;

	len = ft_lstsize(a);
	i = 0;
	while (i < len)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + p)
		{
			pb(a, b);
			i++;
		}
		else if (get_index(*a, i, p) > ft_lstsize(a) / 2)
			rra(a);
		else
			ra(a);
	}
}

void	sort_100(t_stack **a, t_stack **b)
{
	int	len;

	len = ft_lstsize(a);
	if (len <= 400)
	{
		sort(a, b, 15);
	}
	else
	{
		sort(a, b, 30);
	}
	push_a(a, b);
}
