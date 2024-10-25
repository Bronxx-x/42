/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 02:19:02 by yhamdan           #+#    #+#             */
/*   Updated: 2024/10/08 02:19:44 by yhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "push_swap.h"

void	del(void *a)
{
	if (a)
		free(a);
	return ;
}

void	fill_list2(t_list **a_head, char **str)
{
	int		i;
	t_list	*a;

	i = 0;
	while (str[i])
	{
		a = (t_list *)malloc(sizeof(t_list));
		if (ft_strncmp("2147483647", str[i]) > 0)
		{
			ft_lstclear(a_head, del);
			write(2, "ERROR\n", 6);
			exit(1);
		}
		a->value = ft_atoi(str[i++]);
		ft_lstadd_back(a_head, a);
		a = NULL;
	}
}

int	ch_dub(t_list *a)
{
	t_list	*tmp;
	t_list	*head;

	head = a;
	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (tmp->value == a->value)
			{
				ft_lstclear(&head, del);
				write(2, "ERROR\n", 6);
				exit(1);
			}
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}

int	fill_list(t_list **a_head, char *argv)
{
	char	**str;
	int		i;
	t_list	*a;

	i = 0;
	str = ft_split(argv, ' ');
	if (!str)
		return (1);
	while (str[i])
	{
		if (ft_strncmp("2147483647", str[i]))
		{
			ft_lstclear(a_head, del);
			write(2, "ERROR\n", 6);
			exit(1);
		}
		a = (t_list *)malloc(sizeof(t_list));
		a->value = ft_atoi(str[i++]);
		ft_lstadd_back(a_head, a);
		a = NULL;
		free(str[i - 1]);
	}
	free(str);
	return (2);
}

int	main(int arg, char *argv[])
{
	t_list	*a;
	t_list	*b;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (arg == 1 || (arg == 2 && !argv[1][0]))
		return (0);
	while (argv[++j])
	{
		i = 0;
		while (argv[j][++i])
			if (!(ft_isdigit(argv[j][i]) || (argv[j][i] == ' '
				|| argv[j][i] == '-')))
				return (write(2, "ERROR\n", 6), 2);
	}
	a = NULL;
	b = NULL;
	if (arg == 2)
		fill_list(&a, argv[1]);
	else
		fill_list2(&a, ++argv);
	ch_dub(a);
	return (sort(&a, &b), 0);
}
