/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 02:20:00 by yhamdan           #+#    #+#             */
/*   Updated: 2024/10/08 02:37:31 by yhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "push_swap.h"

void	push(t_list **s, t_list **d)
{
	t_list	*tmp;

	if (!(*s) || !s)
		return ;
	tmp = (*s)->next;
	ft_lstadd_front(d, *s);
	*s = tmp;
}

void	pa(t_list **a, t_list **b, int j)
{
	push(b, a);
	if (j == 0)
		printf("pa\n");
}

void	pb(t_list **a, t_list **b, int j)
{
	push(a, b);
	if (j == 0)
		printf("pb\n");
}
