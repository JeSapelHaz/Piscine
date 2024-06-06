/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:40:31 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/22 16:39:57 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*p;
	int	ran;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ran = max - min;
	p = malloc(sizeof(int) * (ran));
	if (!p)
	{
		*range = NULL;
		return (-1);
	}
	*range = p;
	i = 0;
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int **test;
	int *test2;
	test = &test2;
	int min;
	int max;
	int size;
	int i;


	min = 5;
	max = 15;
	i = 0;
	size =  ft_ultimate_range(test , min, max);
	while(i < size)
	{
		printf("%d", test2[i]);
		i++;
	}
}*/
