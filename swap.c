/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 02:39:19 by yhamdan           #+#    #+#             */
/*   Updated: 2024/10/08 06:14:22 by yhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "push_swap.h"

void	swap(t_list **lst)
{
	t_list	*tmp;

	if (!(*lst) || !((*lst)->next))
		return ;
	tmp = *lst;
	*lst = tmp->next;
	tmp->next = (*lst)->next;
	(*lst)->next = tmp;
}

void	sa(t_list **a, int j)
{
	swap(a);
	if (j == 0)
		printf("sa\n");
}

void	sb(t_list **b, int j)
{
	swap(b);
	if (j == 0)
		printf("sb\n");
}

void	ss(t_list **a, t_list **b, int j)
{
	swap(a);
	swap(b);
	if (j == 0)
		printf("ss\n");
}
