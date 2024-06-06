/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:29:49 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/28 12:41:57 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = -1;
	while (par[++i].str != 0)
	{
		j = -1;
		while (par[i].str[++j])
			write(1, &par[i].str[j], 1);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		j = -1;
		while (par[i].copy[++j])
			write(1, &par[i].copy[j], 1);
		write(1, "\n", 1);
	}
}
/*
#include "../ex04/ft_strs_to_tab.c"
#include <stdio.h>
int	main(int ac, char **av)
{
	struct s_stock_str *par;
	par[0].size = 2;
	par[0].str = "coucou";
	par[0].copy = "coucoucopy";
	par[1].size = 2;
	par[1].str = "coucou";
	par[1].copy = "coucoucopy";
	printf("%s", par[0].str);
	ft_show_tab(par);


	ft_show_tab(ft_strs_to_tab(ac, &av[1]));	
}*/
