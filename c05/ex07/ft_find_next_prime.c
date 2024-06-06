/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:27:09 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/22 10:34:21 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d ",ft_find_next_prime(151513155));
	printf("%d ",ft_find_next_prime(2147395600));
	printf("%d ",ft_find_next_prime(1021512));
	printf("%d ",ft_find_next_prime(1255135120));
}*/
