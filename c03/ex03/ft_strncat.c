/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:45:32 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/15 11:13:02 by hbutt            ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0'; 
	return (dest);
}
/*0
#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "coucou";
	char dest[100] = "les amis";
	unsigned int nb = 0;
	char src2[] = "coucou";
	char dest2[100] = "les amis";

	printf("%s ", ft_strncat(dest, src, nb));
	printf("%s ", strncat(dest2, src2, nb));
}*/
