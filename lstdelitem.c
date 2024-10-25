/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdelitem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 03:44:43 by yhamdan           #+#    #+#             */
/*   Updated: 2024/10/08 03:51:40 by yhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void	ft_lstclear_item(t_list **lst, t_list *node)
{
	t_list	*temp;
	t_list	*step;

	temp = *lst;
	while (temp)
	{
		if (temp == node)
			break ;
		step = temp;
		temp = temp->next;
	}
	if (!temp)
		return ;
	if (temp == *lst)
		*lst = temp->next;
	else
		step->next = temp->next;
	free(temp);
}
