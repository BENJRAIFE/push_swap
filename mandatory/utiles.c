/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bbenjrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:28:19 by bbenjrai          #+#    #+#             */
/*   Updated: 2024/04/01 22:15:24 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// char	**freeSplit(char **str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		free(str[i++]);
// 	free(str);
// 	return (NULL);
// }

int	ft_isdigit(int c)
{
	if (c != '\0')
	{
		if (c <= '9' && c >= '0')
			return (1);
		else
			return (0);
	}
	return (0);
}

long	ft_atoi(char *str)
{
	int			i;
	int			sign;
	long long	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		i++;
		sign = -sign;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 + str[i++] - '0';
	}
	return (res * sign);
}

char	*tstring(char **av, int len)
{
	int		i;
	int		j;
	char	*str;
	int		k;

	i = 1;
	j = 0;
	k = 0;
	str = malloc((len + 1) * sizeof(char *));
	if (!str)
		freenull(str);
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			str[k++] = av[i][j++];
			if (av[i][j] == '\0')
				str[k++] = ' ';
		}
		i++;
	}
	str[k - 1] = '\0';
	return (str);
}

void	free2(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
