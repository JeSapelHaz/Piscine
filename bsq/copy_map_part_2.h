/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_map_part_2.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:18:14 by alama             #+#    #+#             */
/*   Updated: 2024/02/28 21:44:18 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COPY_MAP_PART_2_H
# define COPY_MAP_PART_2_H

# include <unistd.h>
# include <stdlib.h>
# include "ft_verrif.h"

int		ft_count_back_n(char *map);
void	ft_copy_split(char *map, char **split_map);
void	verif_split(char **split_map, char *map, int *j);
void	ft_split_two(char *map, char **split_map, int i, int *j);
char	**ft_split(char *map);

#endif
