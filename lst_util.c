/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:05:09 by yhamdan           #+#    #+#             */
/*   Updated: 2024/10/20 18:06:22 by yhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_list *a)
{
	int	i;

	i = a->value;
	while (a)
	{
		if (a->value < i)
			i = a->value;
		a = a->next;
	}
	return (i);
}

int	ft_max(t_list *a)
{
	int	i;

	i = a->value;
	while (a)
	{
		if (a->value > i)
			i = a->value;
		a = a->next;
	}
	return (i);
}

int	ft_find_index(t_list *a, int n)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = a;
	while (tmp->value != n)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	ft_find_place_b(t_list *b, int nbr_push)
{
	int		i;
	t_list	*tmp;

	i = 1;
	if (nbr_push > b->value && nbr_push < ft_lstlast(b)->value)
		i = 0;
	else if (nbr_push > ft_max(b) || nbr_push < ft_min(b))
		i = ft_find_index(b, ft_max(b));
	else
	{
		tmp = b->next;
		while (b->value < nbr_push || tmp->value > nbr_push)
		{
			b = b->next;
			tmp = b->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_place_a(t_list *a, int nbr_push)
{
	int		i;
	t_list	*tmp;

	i = 1;
	if (nbr_push < a->value && nbr_push > ft_lstlast(a)->value)
		i = 0;
	else if (nbr_push > ft_max(a) || nbr_push < ft_min(a))
		i = ft_find_index(a, ft_min(a));
	else
	{
		tmp = a->next;
		while (a->value > nbr_push || tmp->value < nbr_push)
		{
			a = a->next;
			tmp = a->next;
			i++;
		}
	}
	return (i);
}
