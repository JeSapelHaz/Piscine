/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:55:01 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/26 17:39:07 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		taillestrs;
	int		i;
	char	*str;

	i = -1;
	taillestrs = 0;
	str = NULL;
	if (size == 0)
		return ((char *) malloc(sizeof(char)));
	while (++i < size)
		taillestrs = taillestrs + ft_strlen(strs[i]);
	taillestrs = taillestrs + (ft_strlen(sep) * size - 1);
	str = malloc(sizeof(char) * taillestrs + 1);
	if (!str)
		return (0);
	str[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size - 1)
			ft_strcat(str, sep);
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[3];
	char	*separator;
	char	*result;
	int		size;

	size = 3;
	strs[0] = "44";
	strs[1] = "55";
	strs[2] = "66";
	separator = "goat";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}*/
