/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:16:29 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/28 23:06:18 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "print_tab.h"

void	print_tab(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i] != 0 && i < nli(map))
	{
		j = 0;
		while (map[i][j] && i < nli(map))
		{
			write(1, &map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	nli(char **map)
{
	int	i;
	int	nbli;

	i = 0;
	nbli = -1;
	while (map[i])
	{
		nbli++;
		i++;
	}
	return (nbli);
}

int	nco(char **map)
{
	int	i;
	int	nbcol;

	i = 0;
	nbcol = -1;
	while (map[0][i])
	{
		nbcol++;
		i++;
	}
	return (nbcol);
}
