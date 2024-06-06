/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:04:58 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/13 17:31:05 by hbutt            ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] < 'z')
	{
		str[0] -= 32;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < '0' || str[i - 1] > 'z')
				str[i] -= 32;
			if (str[i - 1] > '9' && str[i - 1] < 'A')
				str[i] -= 32;
			if (str[i - 1] > 'Z' && str[i - 1] < 'a')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
        char str[] = "|salut, comMent tu vas ? 
		\42mots quarAnte-deux; cinquante+et+uN e.puntOs";
        printf("%s", ft_strcapitalize(str));
}
*/
