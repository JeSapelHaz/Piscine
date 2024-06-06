/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:59:28 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/20 15:02:07 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
	{
		power--;
		nb = nb * ft_recursive_power(nb, power);
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d ", ft_recursive_power(0, 0));
	printf("%d ", ft_recursive_power(0, 1));
	printf("%d ", ft_recursive_power(1, 0));
	printf("%d ", ft_recursive_power(2, 2));
}*/
