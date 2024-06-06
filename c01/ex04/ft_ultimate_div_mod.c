/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:35:00 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/08 18:25:21 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	m;
	int	n;

	m = *a;
	n = *b;
	*a = m / n;
	*b = m % n;
}
/*
int main(void)
{
	int m;
	int n;
	int *a;
	int *b;

	m = 42;
	n = 19;
	a = &m;
	b = &n;
	ft_ultimate_div_mod(a, b);
	printf("%d %d", *a, *b);
	return(0);
}*/
