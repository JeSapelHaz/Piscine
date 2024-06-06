/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:38:37 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/13 11:49:40 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (len);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char dest[5];
	char src[] = "bdgpopo";
	unsigned int size;
	char dest2[5];
	char src2[] = "bdgpopo";
	unsigned int size2;
		
	size = 5;
	printf("%u ", ft_strlcpy(dest, src, size));
	printf("%s \n", dest);
	printf("%u ", strlcpy(dest2, src2, size));
	printf("%s \n", dest2);
}*/
