/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:16:25 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/28 22:49:34 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prog.h"
#include "ft_point.h"

int	next(char **map, t_point p, int lenght, char w)
{
	int	k;
	int	l;

	k = p.i + lenght;
	l = p.j + lenght;
	while (p.i <= k)
	{
		if (map[k][l] == w)
			return (0);
		k--;
	}
	k = p.i + lenght;
	l = p.j + lenght;
	while (p.j <= l)
	{
		if (map[k][l] == w)
			return (0);
		l--;
	}
	return (1);
}

t_top_left	initialize(void)
{
	t_top_left	tl;

	tl.line = 0;
	tl.column = 0;
	tl.lenght = 0;
	return (tl);
}

int	valid(char **map, t_point p, int len)
{
	if (p.i + len < nli(map) && p.j + len < nco(map))
		return (1);
	return (0);
}

t_top_left	resolving(char **map, char w)
{
	t_point		p;
	int			len;
	t_top_left	tl;

	p.i = -1;
	tl = initialize();
	while (++p.i < nli(map))
	{
		p.j = -1;
		while (++p.j < nco(map))
		{
			len = 0;
			while (next(map, p, len, w) && valid(map, p, len))
				len++;
			if (len > tl.lenght)
			{
				tl.line = p.i;
				tl.column = p.j;
				tl.lenght = len;
			}
		}
	}
	return (tl);
}

void	add_biggest_square(char **map, t_top_left tl, char plein)
{
	t_point	p;

	p.i = tl.line;
	while (p.i < tl.line + tl.lenght)
	{
		p.j = tl.column;
		while (p.j < tl.column + tl.lenght)
		{
			map[p.i][p.j] = plein;
			p.j++;
		}
		p.i++;
	}
}
