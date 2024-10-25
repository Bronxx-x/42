/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:59:41 by yhamdan           #+#    #+#             */
/*   Updated: 2024/08/27 18:58:36 by yhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_strncmp(const char *s1, const char *s2)
{
	int		j;
	int		t;

	j = 0;
	t = 0;
	if (s2[0] == '-' || s1[0] == '-')
		return (0);
	while (s1[j])
		j++;
	while (s2[t])
		t++;
	if (t > j)
		return (1);
	if (j > t)
		return (0);
	if (((unsigned char)s2[9] - (unsigned char)s1[9]) > 0)
		return (1);
	return (0);
}
