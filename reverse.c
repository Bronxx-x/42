/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 02:31:15 by yhamdan           #+#    #+#             */
/*   Updated: 2024/10/09 02:44:37 by yhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "push_swap.h"

void	reverse(t_list **l)
{
	t_list	*tmp;

	if (!(*l) || !((*l)->next))
		return ;
	tmp = *l;
	*l = ft_lstlast(*l);
	(*l)->next = tmp;
	while (tmp->next != *l)
		tmp = tmp->next;
	tmp->next = NULL;
}

void	rra(t_list **a, int j)
{
	reverse(a);
	if (j == 0)
		printf("rra\n");
}

void	rrb(t_list **b, int j)
{
	reverse(b);
	if (j == 0)
		printf("rrb\n");
}

void	rrr(t_list **a, t_list **b, int j)
{
	reverse(a);
	reverse(b);
	if (j == 0)
		printf("rrr\n");
}
