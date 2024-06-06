/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 22:24:30 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/28 21:17:57 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROG_H
# define PROG_H

# include "prog_struct.h"
# include <unistd.h>
# include "print_tab.h"
# include "ft_point.h"

int			next(char **map, t_point p, int lenght, char w);
t_top_left	initialize(void);
int			valid(char **map, t_point p, int len);
t_top_left	resolving(char **map, char w);
void		add_biggest_square(char **map, t_top_left tl, char plein);

#endif
