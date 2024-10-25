/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 23:29:45 by yhamdan           #+#    #+#             */
/*   Updated: 2024/10/06 23:37:13 by yhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	push(t_list **s, t_list **d);
void	pa(t_list **a, t_list **b, int j);
void	pb(t_list **a, t_list **b, int j);
void	reverse(t_list **l);
void	rra(t_list **a, int j);
void	rrb(t_list **b, int j);
void	rrr(t_list **a, t_list **b, int j);
void	rotate(t_list **l);
void	ra(t_list **a, int j);
void	rb(t_list **b, int j);
void	rr(t_list **a, t_list **b, int j);
void	swap(t_list **lst);
void	ss(t_list **a, t_list **b, int j);
void	sa(t_list **a, int j);
void	sb(t_list **b, int j);
void	del(void *a);
int		high(t_list *l, int high);
int		small(t_list *l, int small);
int		sorted(t_list *l);
int		sort(t_list **a, t_list **b);
void	ft_lstclear_item(t_list **lst, t_list *node);
int		list_size(t_list *l);
int		ft_strcmp(const char *s1, const char *s2);
void	sort_3(t_list **a);
void	sort_5(t_list **a, t_list **b, int size);
void	big_sort(t_list **a, t_list **b);
int		ft_case_rarb_a(t_list *a, t_list *b, int c);
int		ft_case_rrarrb_a(t_list *a, t_list *b, int c);
int		ft_case_rarrb_a(t_list *a, t_list *b, int c);
int		ft_case_rrarb_a(t_list *a, t_list *b, int c);
int		ft_case_rarb_a(t_list *a, t_list *b, int c);
int		ft_case_rrarrb_a(t_list *a, t_list *b, int c);
int		ft_case_rarrb_a(t_list *a, t_list *b, int c);
int		ft_case_rrarb_a(t_list *a, t_list *b, int c);
int		ft_min(t_list *a);
int		ft_max(t_list *a);
int		ft_find_index(t_list *a, int n);
int		ft_rotate_type_ba(t_list *a, t_list *b);
int		ft_rotate_type_ab(t_list *a, t_list *b);
void	ft_sort(t_list **a);
t_list	**ft_sort_a(t_list **a, t_list **b);
t_list	*ft_sort_b(t_list **a);
void	ft_sort_b_till_3(t_list **a, t_list **b);
int		ft_case_rarb(t_list *a, t_list *b, int c);
int		ft_case_rrarrb(t_list *a, t_list *b, int c);
int		ft_case_rrarb(t_list *a, t_list *b, int c);
int		ft_case_rarrb(t_list *a, t_list *b, int c);
int		fill_list(t_list **a_head, char *argv);
int		ch_dub(t_list *a);
void	fill_list2(t_list **a_head, char **str);
int		ft_find_place_a(t_list *a, int nbr_push);
int		ft_find_place_b(t_list *b, int nbr_push);
int		ft_apply_rarb(t_list **a, t_list **b, int c, char s);
int		ft_apply_rrarrb(t_list **a, t_list **b, int c, char s);
int		ft_apply_rrarb(t_list **a, t_list **b, int c, char s);
int		ft_apply_rarrb(t_list **a, t_list **b, int c, char s);

#endif
