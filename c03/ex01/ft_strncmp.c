/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:35:28 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/15 11:11:31 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*s1 = "salutjdjdjd";
	char	*s2 = "sapu";
	unsigned int	n;

	n = 6;
	printf("%d \n",ft_strncmp(s1, s2, 20000));
	char	*s3 = "salutjdjdjd";
	char	*s4 = "sapu";
	printf("%d ",strncmp(s3, s4, 20000));
}*/
