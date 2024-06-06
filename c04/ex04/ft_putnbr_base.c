/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:05:03 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/19 15:42:29 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	verif(char *base)
{
	int	i;
	int	taille;
	int	j;

	taille = ft_strlen(base);
	i = 0;
	if (base[i] == '\0')
		return (0);
	if (taille == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
/*
void	ft_putnbr_base(int nbr, char *base)
{
	int taille;

	taille = ft_strlen(base);
	if (verifbase(base) == 0)
		return ;

}
*/

void	ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	long	nb;
	char	c;

	c = '-';
	len_base = ft_strlen(base);
	nb = nbr;
	if (verif(base) == 1)
	{
		if (nb < 0)
		{
			write(1, &c, 1);
			nb = nb * -1;
		}
		if (nb < len_base)
			write(1, &base[nb], 1);
		if (nb >= len_base)
		{
			ft_putnbr_base(nb / len_base, base);
			ft_putnbr_base(nb % len_base, base);
		}
	}
}
/*
int main(void)
{
	int nbr = -42;
	char *base = "poneyvif";

	ft_putnbr_base(nbr, base);
}*/
