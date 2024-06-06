/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_map.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:52:40 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/28 20:11:19 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COPY_MAP_H
# define COPY_MAP_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	verrif_read(int read_ok, int fd);
int		count_file(char *file);
int		verrif_copy(char *map, int read_ok, int fd);
void	copy_file(char *map, char *file);

#endif
