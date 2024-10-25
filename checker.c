/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 03:21:53 by yhamdan           #+#    #+#             */
/*   Updated: 2024/10/25 03:33:11 by yhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_sub(t_list **a, t_list **b, char *line)
{
	if (line[2] == 'a')
		rra(a, 1);
	else if (line[2] == 'b')
		rrb(b, 1);
	else if (line[2] == 'r')
		rrr(a, b, 1);
}

char	*ft_check(t_list **a, t_list **b, char *line)
{
	if (line[0] == 's' && line[1] == 'a' && line[2] == '\n')
		sa(a, 1);
	else if (line[0] == 's' && line[1] == 'b' && line[2] == '\n')
		sb(b, 1);
	else if (line[0] == 'p' && line[1] == 'a' && line[2] == '\n')
		pa(a, b, 1);
	else if (line[0] == 'p' && line[1] == 'b' && line[2] == '\n')
		pb(a, b, 1);
	else if (line[0] == 'r' && line[1] == 'a' && line[2] == '\n')
		ra(a, 1);
	else if (line[0] == 'r' && line[1] == 'b' && line[2] == '\n')
		rb(b, 1);
	else if (line[0] == 'r' && line[1] == 'r' && line[3] == '\n')
		ft_check_sub(a, b, line);
	else if (line[0] == 'r' && line[1] == 'r' && line[2] == '\n')
		rr(a, b, 1);
	else if (line[0] == 's' && line[1] == 's' && line[2] == '\n')
		ss(a, b, 1);
	else
	{
		write(2, "ERROR\n", 6);
		exit(1);
	}
	return (get_next_line(0));
}

t_list	*process(int arg, char *argv[])
{
	t_list	*a;
	t_list	*b;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (arg == 1 || (arg == 2 && !argv[1][0]))
		return (NULL);
	while (argv[++j])
	{
		i = 0;
		while (argv[j][++i])
			if (!(ft_isdigit(argv[j][i]) || (argv[j][i] == ' '
				|| argv[j][i] == '-')))
				return (NULL);
	}
	a = NULL;
	b = NULL;
	if (arg == 2)
		fill_list(&a, argv[1]);
	else
		fill_list2(&a, ++argv);
	ch_dub(a);
	return (a);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	*line;

	b = NULL;
	a = process(argc, argv);
	line = get_next_line(0);
	if (!line && sorted(a))
		write(2, "KO\n", 3);
	else if (!line && !sorted(a))
		write(2, "OK\n", 3);
	else
		ft_checker_sub(&a, &b, line);
	ft_lstclear(&b, del);
	ft_lstclear(&a, del);
	return (0);
}
