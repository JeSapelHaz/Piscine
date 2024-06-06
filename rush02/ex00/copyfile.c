/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copyfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:01:24 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/25 20:29:47 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	count_file(char *str)
{
	char	c;
	int		fd;
	int		read_ok;
	int		count;

	fd = open(str, O_RDONLY);
	read_ok = -1;
	count = 0;
	while (read_ok != 0)
	{
		read_ok = read(fd, &c, 1);
		if (read_ok == -1)
			write(1, "Dict Error\n", 11);
		count++;
	}
	close(fd);
	return (count);
}

void	copy_file(char *dico, char *str)
{
	char	c;
	int		fd;
	int		read_ok;
	int		count;

	fd = open(str, O_RDONLY);
	read_ok = -1;
	count = 0;
	while (read_ok != 0)
	{
		read_ok = read(fd, &c, 1);
		if (read_ok == -1)
			write(1, "Dict Error\n", 11);
		dico[count] = c;
		count++;
	}
	dico[count] = '\0';
	close(fd);
}
/*
#include <stdio.h>
int main(void)
{
	int count;
	char *dico;
	char *str;

	count = count_file("numbers.dict");
	dico = malloc(sizeof(char) * count + 1);
	str = copy_file(dico, "numbers.dict");

	printf("%d \n", count);
	printf("%s", str);
}*/
