/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 21:39:35 by yhamdan           #+#    #+#             */
/*   Updated: 2024/10/11 22:18:55 by yhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void	sort_5(t_list **a, t_list**b, int size)
{
	t_list	*tmp;
	int		i;

	tmp = *a;
	i = 0;
	while (++i < size && small(tmp, tmp->value))
		tmp = tmp->next;
	if (i < 3)
	{
		if (i == 2)
			sa(a, 0);
		pb(a, b, 0);
	}
	if (i >= 3)
	{
		while (i++ <= size)
			rra(a, 0);
		pb(a, b, 0);
	}
	if (size == 5)
		sort_5(a, b, 4);
	else
		sort_3(a);
	pa (a, b, 0);
}

void	sort_3(t_list **a)
{
	t_list	*tmp;
	int		i;

	tmp = *a;
	i = 0;
	while (++i < 3 && high(tmp, tmp->value))
		tmp = tmp->next;
	if (i == 3)
		sa(a, 0);
	if (i == 2)
	{
		rra(a, 0);
		if ((*a)->value > (*a)->next->value)
			sa(a, 0);
	}
	if (i == 1)
	{
		ra(a, 0);
		if ((*a)->value > (*a)->next->value)
			sa(a, 0);
	}
}

int	sort(t_list **a, t_list **b)
{	
	if (ft_lstsize(*a) > 1)
	{
		if (sorted(*a))
		{
			if (ft_lstsize(*a) == 2)
				sa(a, 0);
			else if (ft_lstsize(*a) == 3)
				sort_3(a);
			else if (ft_lstsize(*a) <= 5)
				sort_5(a, b, ft_lstsize(*a));
			else
				ft_sort(a);
		}
	}
	return (0);
}

void	ft_sort(t_list **a)
{
	t_list	*b;
	int		i;

	b = NULL;
	b = ft_sort_b(a);
	a = ft_sort_a(a, &b);
	i = ft_find_index(*a, ft_min(*a));
	if (i < ft_lstsize(*a) - i)
	{
		while ((*a)->value != ft_min(*a))
			ra(a, 0);
	}
	else
	{
		while ((*a)->value != ft_min(*a))
			rra(a, 0);
	}				
}
