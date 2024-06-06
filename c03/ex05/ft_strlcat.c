/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:09:25 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/15 11:13:46 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = ft_strlen(dest);
	k = j;
	if (size <= j || size == 0)
		return (ft_strlen(src) + size);
	while (src[i] && i < size - k - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (ft_strlen(src) + k);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char dest[40] = "salut";
	char *src = "les amis";

	printf("%lu ",strlcat(dest, src, 4));
	printf("%s ",dest);
	char dest2[40] = "salut";
	char *src2 = "les amis";

	printf("%u ",ft_strlcat(dest2, src2, 4));
	printf("%s ",dest2);}*/
