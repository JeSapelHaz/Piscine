/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:22:21 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/14 14:42:05 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			k = i;
			j = 0;
			while (str[k] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[i]);
				k++;
				j++;
			}
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char *str = "salut mo mon super pote";
	char *to_find = "";
	
	printf("%s ", ft_strstr(str, to_find));
}*/
