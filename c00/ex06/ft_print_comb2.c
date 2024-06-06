/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:50:09 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/08 08:59:40 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int a, int b, int c, int d)
{
	int	e;
	int	f;

	e = ' ';
	f = ',';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &e, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8')
	{
		write(1, &f, 1);
		write(1, &e, 1);
	}
}

void	print_numbers2(int a, int b, int c, int d)
{
	while (c <= '9')
	{
		while (d <= '9')
		{
			print_numbers(a, b, c, d);
			d++;
		}
		d = '0';
		c++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = a ;
			d = b + 1;
			print_numbers2(a, b, c, d);
			b++;
		}
		a++;
	}
}

/*
int main(void)
{
	ft_print_comb2();
	return(0);
}*/
