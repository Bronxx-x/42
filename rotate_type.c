/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:17:43 by yhamdan           #+#    #+#             */
/*   Updated: 2024/10/20 20:18:10 by yhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_type_ba(t_list *a, t_list *b)
{
	int		i;
	t_list	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, b->value);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->value))
			i = ft_case_rarb_a(a, b, tmp->value);
		if (i > ft_case_rrarrb_a(a, b, tmp->value))
			i = ft_case_rrarrb_a(a, b, tmp->value);
		if (i > ft_case_rarrb_a(a, b, tmp->value))
			i = ft_case_rarrb_a(a, b, tmp->value);
		if (i > ft_case_rrarb_a(a, b, tmp->value))
			i = ft_case_rrarb_a(a, b, tmp->value);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ab(t_list *a, t_list *b)
{
	int		i;
	t_list	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->value);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->value))
			i = ft_case_rarb(a, b, tmp->value);
		if (i > ft_case_rrarrb(a, b, tmp->value))
			i = ft_case_rrarrb(a, b, tmp->value);
		if (i > ft_case_rarrb(a, b, tmp->value))
			i = ft_case_rarrb(a, b, tmp->value);
		if (i > ft_case_rrarb(a, b, tmp->value))
			i = ft_case_rrarb(a, b, tmp->value);
		tmp = tmp->next;
	}
	return (i);
}
