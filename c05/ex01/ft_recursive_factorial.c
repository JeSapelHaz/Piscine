/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:22:17 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/15 20:58:49 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial_recur(int result, int nb)
{
	result = result * nb;
	nb --;
	if (nb > 0)
		return (ft_recursive_factorial_recur(result, nb));
	return (result);
}

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (ft_recursive_factorial_recur(result, nb));
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d ", ft_recursive_factorial(5));
}*/
