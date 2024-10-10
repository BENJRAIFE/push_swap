/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bbenjrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:27:05 by bbenjrai          #+#    #+#             */
/*   Updated: 2024/03/30 17:54:25 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*stock_arr(char **str)
{
	int	i;
	int	*arr;
	int	len;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	arr = malloc((len) * sizeof(int));
	if (!arr)
		return (NULL);
	while (i < len)
	{
		arr[i] = ft_atoi(str[i]);
		i++;
	}
	return (arr);
}

void	sort_arr(int *arr, int len)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] > arr[j])
			{
				swap = arr[j];
				arr[j] = arr[i];
				arr[i] = swap;
			}
			j++;
		}
		i++;
	}
}

int	get_position(int *arr, char *str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (arr[i] == ft_atoi(str))
			return (i);
		i++;
	}
	return (i);
}

void	push_stack(int *arr, char **str, t_stack **a, int len)
{
	int		i;
	t_stack	*head;
	t_stack	*new_node;

	i = 0;
	head = NULL;
	new_node = NULL;
	head = ft_lstnew(ft_atoi(str[i]), get_position(arr, str[i], len));
	i++;
	while (str[i])
	{
		new_node = ft_lstnew(ft_atoi(str[i]), get_position(arr, str[i], len));
		ft_lstadd_back(&head, new_node);
		i++;
	}
	*a = head;
}
