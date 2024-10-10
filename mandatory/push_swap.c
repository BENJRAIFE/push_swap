/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bbenjrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:26:11 by bbenjrai          #+#    #+#             */
/*   Updated: 2024/04/02 00:29:28 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_arr(char **strr)
{
	int	i;

	i = 0;
	while (strr != NULL && strr[i] != NULL)
	{
		free(strr[i]);
		i++;
	}
	free(strr);
}

char	**mini_main(int ac, char **av)
{
	int		i;
	char	*str;
	char	**string;
	int		len;

	i = 1;
	len = 0;
	if (ac < 2)
		exit(1);
	is_empty(av);
	while (av[i])
		len += ft_strlen(av[i++]);
	str = tstring(av, len);
	string = ft_split(str, ' ');
	free(str);
	if (!*string)
	{
		free2(string);
		exit(1);
	}
	is_max_min(string);
	check_repeat(string);
	isvalid(string);
	return (string);
}

int	clear_all(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*tmb;

	tmb = *b;
	tmp = *a;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(*a);
		*a = tmp;
	}
	while (tmb != NULL)
	{
		tmb = tmb->next;
		free(*b);
		*b = tmb;
	}
	return (0);
}

int	length(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**str;
	int		*arr;

	a = NULL;
	b = NULL;
	str = mini_main(ac, av);
	if (str[1] && is_sorted(str))
	{
		free2(str);
		exit(0);
	}
	arr = stock_arr(str);
	sort_arr(arr, length(str));
	push_stack(arr, str, &a, length(str));
	free_arr(str);
	free(arr);
	if (ft_lstsize(&a) > 1 && ft_lstsize(&a) <= 3)
		sort_3(&a);
	else if (ft_lstsize(&a) == 5 || ft_lstsize(&a) == 4)
		sort_5(&a, &b);
	else if (ft_lstsize(&a) > 5)
		sort_100(&a, &b);
	clear_all(&a, &b);
}
