/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:52:24 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/13 17:54:56 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	c = '-';
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, &c, 1);
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb = nb + '0';
		write(1, &nb, 1);
	}
}
/*
	}if	else if (nb < 0 )
	{
		write(1, &c, 1);
		nb = nb * -1;
	}
	else if (nb >= 10 && nb != -2147483648)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		nb = nb + '0';
		write(1, &nb, 1);
	}*/
/*
int	main(void)
{
	ft_putnbr (-2147483648);
	ft_putnbr (-555);
	ft_putnbr (777);
	ft_putnbr (9);
	ft_putnbr (88);
	return (0);
}*/
