/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:58:06 by yhamdan           #+#    #+#             */
/*   Updated: 2024/10/20 18:58:21 by yhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_b_till_3(t_list **a, t_list **b)
{
	int		i;
	t_list	*tmp;

	while (ft_lstsize(*a) > 3 && sorted(*a))
	{
		tmp = *a;
		i = ft_rotate_type_ab(*a, *b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*a, *b, tmp->value))
				i = ft_apply_rarb(a, b, tmp->value, 'a');
			else if (i == ft_case_rrarrb(*a, *b, tmp->value))
				i = ft_apply_rrarrb(a, b, tmp->value, 'a');
			else if (i == ft_case_rarrb(*a, *b, tmp->value))
				i = ft_apply_rarrb(a, b, tmp->value, 'a');
			else if (i == ft_case_rrarb(*a, *b, tmp->value))
				i = ft_apply_rrarb(a, b, tmp->value, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_list	*ft_sort_b(t_list **a)
{
	t_list	*b;

	b = NULL;
	if (ft_lstsize(*a) > 3 && sorted(*a))
		pb(a, &b, 0);
	if (ft_lstsize(*a) > 3 && sorted(*a))
		pb(a, &b, 0);
	if (ft_lstsize(*a) > 3 && sorted(*a))
		ft_sort_b_till_3(a, &b);
	if (sorted(*a))
		sort_3(a);
	return (b);
}

t_list	**ft_sort_a(t_list **a, t_list **b)
{
	int		i;
	t_list	*tmp;

	while (*b)
	{
		tmp = *b;
		i = ft_rotate_type_ba(*a, *b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*a, *b, tmp->value))
				i = ft_apply_rarb(a, b, tmp->value, 'b');
			else if (i == ft_case_rarrb_a(*a, *b, tmp->value))
				i = ft_apply_rarrb(a, b, tmp->value, 'b');
			else if (i == ft_case_rrarrb_a(*a, *b, tmp->value))
				i = ft_apply_rrarrb(a, b, tmp->value, 'b');
			else if (i == ft_case_rrarb_a(*a, *b, tmp->value))
				i = ft_apply_rrarb(a, b, tmp->value, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (a);
}
