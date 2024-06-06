/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:54:30 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/28 22:56:15 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "copy_map.h"
#include "prog.h"
#include "print_tab.h"
#include "copy_map_part_2.h"
#include "ft_verrif.h"

void	recup_wall_n_x(char *map, char *x, char *w)
{
	int	i;

	i = 0;
	while (map[i] != '\n')
		i++;
	i--;
	if (i < 4)
	{
		free(map);
		exit(0);
	}
	*x = map[i];
	i--;
	*w = map[i];
	if (*x == *w)
	{
		free(map);
		exit(0);
	}
}

void	starter(char *map, char **split_map)
{
	t_top_left	tl;
	char		x;
	char		w;

	if (!first_case(split_map))
		ft_free_all(split_map, map);
	recup_wall_n_x(map, &x, &w);
	tl = resolving(split_map, w);
	add_biggest_square(split_map, tl, x);
	print_tab(split_map);
}

void	verrif_split_map(char *map, char **split_map)
{
	if (!split_map)
	{
		write(2, "split Error 4\n", 14);
		free(map);
		exit(0);
	}
}

int	main(int argc, char **argv)
{
	int			count;
	char		*map;
	char		**split_map;
	char		*file;

	if (argc < 2)
		file = "example_file";
	else
		file = argv[1];
	count = count_file(file);
	map = malloc(sizeof(char) * count + 1);
	if (!map)
		exit(0);
	split_map = malloc(sizeof(char *) * count + 1);
	verrif_split_map(map, split_map);
	copy_file(map, file);
	split_map = ft_split(map);
	starter(map, split_map);
	free(map);
	free(split_map);
	return (0);
}
