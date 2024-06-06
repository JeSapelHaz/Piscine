/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:36:30 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/15 14:35:41 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0'; 
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[6] = " pouic";
	char dest[12] = "pouic";
	char src2[6] = " pouic";
	char dest2[12] = "pouic";
	printf("%s \n",strcat(dest, src));
	printf("%s ",ft_strcat(dest2, src2));
	printf("%d ", ft_strlen(dest));
	printf("%d ", ft_strlen(dest2));
}*/
