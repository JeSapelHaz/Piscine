/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:18:42 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/11 14:58:17 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	char *str = "DDDD";
	char *str2 = "sa1kgkggk";
	char *str3 = "445coldsef";
	printf("%d", ft_str_is_printable(str));
	printf("%d", ft_str_is_printable(str2));
	printf("%d", ft_str_is_printable(str3));
}*/
