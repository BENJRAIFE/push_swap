/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bbenjrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:27:57 by bbenjrai          #+#    #+#             */
/*   Updated: 2024/04/01 21:53:04 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	position(t_stack *a, int conte)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->content == conte)
			break ;
		i++;
		a = a->next;
	}
	return (i);
}

int	min(t_stack *a)
{
	t_stack	*tmp;
	int		min;

	tmp = a;
	min = tmp->content;
	while (tmp != NULL)
	{
		if (min > tmp->content)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}

int	func(int i, t_stack **a, t_stack **b)
{
	if ((*a)->next != NULL)
	{
		if (position((*a), min((*a))) > 2)
		{
			if ((*a)->content != min((*a)))
				rra(a);
			else
			{
				pb(a, b);
				i++;
			}
		}
		else
		{
			if ((*a)->content != min((*a)))
				ra(a);
			else
			{
				pb(a, b);
				i++;
			}
		}
	}
	return (i);
}

void	sort_5(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (i < 2)
		i = func(i, a, b);
	sort_3(a);
	pa(a, b);
	pa(a, b);
}
