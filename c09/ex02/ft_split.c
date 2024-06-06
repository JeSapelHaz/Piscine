/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:38:25 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/29 17:11:26 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char a, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (a == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	nombre_mots(char *str, char *charset)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i] != 0)
			nb++;
		while (str[i] && is_sep(str[i], charset) == 0)
			i++;
	}
	return (nb);
}

int	longueur_mot(char *str, char *charset, int i)
{
	int	nb;

	nb = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset))
			return (nb);
		i++;
		nb++;
	}
	return (nb);
}

char	*put_str(char *str, char *charset, int i)
{
	int		j;
	int		long_mot;
	char	*str2;

	j = 0;
	long_mot = longueur_mot(str, charset, i);
	str2 = malloc (sizeof(char) * long_mot +1);
	while (j < long_mot)
	{
		str2[j] = str[i];
		j++;
		i++;
	}
	str2[j] = '\0';
	return (str2);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		j;

	i = 0;
	j = 0;
	split = malloc(sizeof(char *) * (nombre_mots(str, charset) + 1));
	if (!split)
		return (0);
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			split[j] = put_str(str, charset, i);
			i++;
			j++;
		}
		while (str[i] && is_sep(str[i], charset) == 0)
			i++;
	}
	split[j] = 0;
	return (split);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "122ceci122est2233un2test112";
	char *charset = "123";
	char **split = ft_split(str, charset);
	int i = 0;
	while(split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
}*/
