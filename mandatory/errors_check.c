/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bbenjrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:25:20 by bbenjrai          #+#    #+#             */
/*   Updated: 2024/04/01 23:49:55 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_empty(char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (av[i])
	{
		if (av[i][0] == '\0')
			ft_error(1);
		i++;
	}
}

void	check_repeat(char **string)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (string && (*string))
	{
		while (string[i])
		{
			j = i + 1;
			while (string[j])
			{
				if (ft_atoi(string[i]) == ft_atoi(string[j]))
				{
					free2(string);
					ft_error(1);
				}
				j++;
			}
			i++;
		}
	}
}

void	is_max_min(char **string)
{
	int	i;

	i = 0;
	if (string && (*string))
	{
		while (string[i])
		{
			if (ft_atoi(string[i]) > 2147483647 || ft_atoi(string[i])
				< -2147483648)
			{
				free2(string);
				ft_error(1);
			}
			i++;
		}
	}
}

int	is_sorted(char **string)
{
	int	i;
	int	next;
	int	this;

	i = 0;
	while (string[i] && string[i + 1])
	{
		this = ft_atoi(string[i]);
		next = ft_atoi(string[i + 1]);
		if (this > next)
			return (0);
		i++;
	}
	return (1);
}

void	isvalid(char **string)
{
	int	i;
	int	j;

	i = 0;
	if (string && (*string))
	{
		while (string[i])
		{
			j = 0;
			if ((string[i][j] == '+' || string[i][j] == '-')
				&& ft_isdigit(string[i][j + 1]))
				j++;
			while (string[i][j])
			{
				if (!ft_isdigit(string[i][j]))
				{
					free2(string);
					ft_error(1);
				}
				j++;
			}
			i++;
		}
	}
}
