/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bbenjrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:27:42 by bbenjrai          #+#    #+#             */
/*   Updated: 2024/03/25 14:24:46 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max(t_stack **a)
{
	t_stack	*tmp;
	int		mx;

	mx = 0;
	if (*a != NULL)
	{
		tmp = (*a);
		mx = (*a)->content;
		while (tmp != NULL)
		{
			if (mx < tmp->content)
				mx = tmp->content;
			tmp = tmp->next;
		}
	}
	return (mx);
}

void	sort_3(t_stack **a)
{
	if ((*a)->content == max(a))
		ra(a);
	else if ((*a)->next->content == max(a))
		rra(a);
	if ((*a)->next != NULL && (*a)->content > (*a)->next->content)
		sa(a);
}
