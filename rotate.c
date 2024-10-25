/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:51:11 by yhamdan           #+#    #+#             */
/*   Updated: 2024/10/09 02:09:25 by yhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "push_swap.h"

void	rotate(t_list **l)
{
	t_list	*tmp;

	if (!(*l) || !((*l)->next))
		return ;
	tmp = ft_lstlast(*l);
	tmp->next = *l;
	*l = (*l)->next;
	tmp->next->next = NULL;
}

void	ra(t_list **a, int j)
{
	rotate(a);
	if (j == 0)
		printf("ra\n");
}

void	rb(t_list **b, int j)
{
	rotate(b);
	if (j == 0)
		printf("rb\n");
}

void	rr(t_list **a, t_list **b, int j)
{
	rotate(a);
	rotate(b);
	if (j == 0)
		printf("rr\n");
}
