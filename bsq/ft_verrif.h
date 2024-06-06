/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verrif.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:34:17 by alama             #+#    #+#             */
/*   Updated: 2024/02/28 22:16:12 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VERRIF_H
# define FT_VERRIF_H

# include <unistd.h>
# include <stdlib.h>

void	ft_free_all(char **split_map, char *map);
void	ft_is_same_line(char **split_map, char *map);
int		first_case(char **split_map);

#endif
