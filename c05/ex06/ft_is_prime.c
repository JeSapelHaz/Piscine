/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:09:34 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/21 12:24:55 by hbutt            ###   ########.fr       */
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
/*
#include <stdio.h>
int	main(void)
{
	printf("%d ", ft_is_prime(493));
	printf("%d ", ft_is_prime(517));
	printf("%d ", ft_is_prime(2));
	printf("%d ", ft_is_prime(45));
	printf("%d ", ft_is_prime(49));
	printf("%d ", ft_is_prime(55));
	printf("%d ", ft_is_prime(400000));
	printf("%d ", ft_is_prime(456610));
	printf("%d ", ft_is_prime(488747));
	printf("%d ", ft_is_prime(405445));
	printf("%d ", ft_is_prime(403333));
	printf("%d ", ft_is_prime(407515151));
}*/
