/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verrif.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:30:37 by alama             #+#    #+#             */
/*   Updated: 2024/02/28 22:55:42 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_verrif.h"

void	ft_free_all(char **split_map, char *map)
{
	int	i;

	i = 0;
	while (split_map[i] != 0)
	{
		free(split_map[i]);
		i++;
	}
	free(split_map);
	free(map);
	write(2, "map error\n", 10);
	exit(0);
}

void	ft_is_same_line(char **split_map, char *map)
{
	int	i;
	int	j;
	int	len;

	i = -1;
	j = 0;
	while (split_map[0][j])
	{
		j++;
	}
	len = j;
	while (split_map[++i])
	{
		j = 0;
		while (split_map[i][j])
			j++;
		if (len != j)
		{
			ft_free_all(split_map, map);
			exit(0);
		}
	}
}

int	first_case(char **split_map)
{
	if (split_map[0][0] == '\0')
		return (0);
	return (1);
}
