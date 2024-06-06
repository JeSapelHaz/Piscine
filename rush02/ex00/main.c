/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:29:21 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/25 20:30:22 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#include <stdlib.h>

int		count_file(char *str);
void	copy_file(char *dico, char *str);
int		conversion(char *dico, char *str);
void	print_letters(char *str, int i);

int	main(int ac, char **av)
{
	int		count;
	char	*dico;
	int		i;

	dico = NULL;
	if (ac < 2 || ac > 3)
		write(1, "Error\n", 6);
	else if (ac == 3)
	{
		count = count_file(av[1]);
		dico = malloc(sizeof(char) * count +1);
		if (!dico)
			return (0);
		copy_file(dico, av[1]);
	}
	else if (ac == 2) 
	{
		count = count_file("numbers.dict");
		dico = malloc(sizeof(char) * count + 1);
		if (!dico)
			return (0);
		copy_file(dico, "numbers.dict");
		i = conversion(dico, av[1]);
		print_letters(dico, i); 
	}
	free(dico);
}
