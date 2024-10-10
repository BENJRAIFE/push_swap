/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addnode_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bbenjrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:24:54 by bbenjrai          #+#    #+#             */
/*   Updated: 2024/04/01 21:54:03 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*tail(t_stack *list)
{
	t_stack	*temp;

	temp = list;
	if (!list)
		return (NULL);
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	return (temp);
}

t_stack	*before_last(t_stack *list)
{
	t_stack	*temp;

	temp = list;
	if (list == NULL)
		return (NULL);
	while (temp->next != NULL && temp->next->next != NULL)
	{
		temp = temp->next;
	}
	return (temp);
}

t_stack	*ft_lstnew(int content, int pos)
{
	t_stack	*linked_lst;

	linked_lst = malloc(sizeof(t_stack));
	if (!linked_lst)
		return (NULL);
	linked_lst->content = content;
	linked_lst->index = pos;
	linked_lst->next = NULL;
	return (linked_lst);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		tail(*lst)->next = new;
}

int	ft_lstsize(t_stack **lst)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *lst;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
