/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:48:49 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/12 11:12:48 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	int i = 0;
	char str[] = "DDDD";
	char str2[] = "sakgkggk";
	char str3[] = "Kcoldsef";
	ft_strlowcase(str);
	ft_strlowcase(str2);
	ft_strlowcase(str3);
//	while(str3[i])
//	{
//		printf("%c", str3[i]);
//		i++;
//	}
	printf("%s", str);
	printf("%s", str2);
	printf("%s", str3);
	return (0);
}*/
