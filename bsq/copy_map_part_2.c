/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_map_part_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:10:15 by alama             #+#    #+#             */
/*   Updated: 2024/02/28 22:55:08 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "copy_map_part_2.h"

int	ft_count_back_n(char *map)
{
	int	i;
	int	back_n;

	i = 0;
	back_n = 0;
	while (map[++i])
	{
		if (map[i] == '\n')
			back_n++;
	}
	return (back_n);
}

void	ft_copy_split(char *map, char **split_map)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	j = 0;
	while (map[i] != '\n')
		i++;
	i++;
	while (map[i])
	{
		if (map[i] == '\n')
		{
			split_map[k][j] = '\0';
			j = 0;
			k++;
			i++;
		}
		split_map[k][j] = map[i];
		j++;
		i++;
	}
}

void	verrif_split(char **split_map, char *map, int *j)
{
	if (!split_map[*j])
		ft_free_all(split_map, map);
}

void	ft_split_two(char *map, char **split_map, int i, int *j)
{
	int	mall_split;

	mall_split = 0;
	while (map[i])
	{
		if (map[i] == '\n')
		{
			split_map[*j] = malloc(sizeof(char) * mall_split + 1);
			verrif_split(split_map, map, j);
			split_map[*j][mall_split + 1] = '\0';
			*j += 1;
			mall_split = 0;
		}
		else
			mall_split++;
		i++;
	}
	ft_is_same_line(split_map, map);
}

char	**ft_split(char *map)
{
	int		i;
	int		j;
	int		back_n;
	char	**split_map;

	back_n = ft_count_back_n(map);
	split_map = malloc(sizeof(char *) * (back_n + 1));
	if (!split_map)
	{
		free(map);
		write(2, "Split Error\n", 12);
		exit(0);
	}
	split_map[back_n + 1] = 0;
	i = 0;
	while (map[i] != '\n')
		i++;
	i++;
	j = 0;
	ft_split_two(map, split_map, i, &j);
	ft_copy_split(map, split_map);
	return (split_map);
}
