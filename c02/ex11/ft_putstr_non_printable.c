/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:13:57 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/13 18:44:59 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hexa;
	int		i;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~') 
		{
			write(1, "\\", 1);
			write(1, &hexa[(unsigned char)str[i] / 16], 1);
			write(1, &hexa[(unsigned char)str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int main(void)
{
	char *str = "Coucou\ntu vas bien ?";
	ft_putnbr_non_printable(str);
}*/
