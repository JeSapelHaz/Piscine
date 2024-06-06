/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:34:05 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/11 15:58:11 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int i = 0;
	char str[] = "DDDD";
	char *str2 = "sakgkggk";
	char *str3 = "Kcoldsef";
	ft_strupcase(str3); 
//	while(str3[i])
//	{
//		printf("%c", str3[i]);
//		i++;
//	}
	printf("%s", str3);
	return (0);
}*/
