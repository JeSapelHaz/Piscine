/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:48:28 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/28 22:11:26 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "copy_map.h"

void	verrif_read(int read_ok, int fd)
{
	if (read_ok == -1)
	{
		write(2, "map error\n", 10);
		close(fd);
		exit(0);
	}
}

int	count_file(char *file)
{
	char	c;
	int		fd;
	int		read_ok;
	int		count;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(2, "map error\n", 10);
		exit(0);
	}
	read_ok = -1;
	count = 0;
	while (read_ok != 0)
	{
		read_ok = read(fd, &c, 1);
		verrif_read(read_ok, fd);
		count++;
	}
	close(fd);
	return (count);
}

int	verrif_copy(char *map, int read_ok, int fd)
{
	if (read_ok == -1)
	{
		write(2, "map error\n", 10);
		close(fd);
		free(map);
		exit(0);
	}
	return (fd);
}

void	copy_file(char *map, char *file)
{
	char	c;
	int		fd;
	int		read_ok;
	int		count;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(2, "map error\n", 10);
		free(map);
		exit(0);
	}
	read_ok = -1;
	count = 0;
	while (read_ok != 0)
	{
		read_ok = read(fd, &c, 1);
		fd = verrif_copy(map, read_ok, fd);
		map[count] = c;
		count++;
	}
	map[count] = '\0';
	close(fd);
}
