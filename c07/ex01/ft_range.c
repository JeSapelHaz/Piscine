/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:44:27 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/26 14:35:31 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (0);
	i = 0;
	if (max <= min)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	int i;
	int *tab = ft_range(-5, 22);
	i = -1;
	while(tab[++i])
		printf("%d ", tab[i]);
}*/
