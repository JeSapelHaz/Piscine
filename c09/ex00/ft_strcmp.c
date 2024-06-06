/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:11:56 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/28 11:17:06 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char *s1 = "coucou";
	char *s2 = "coucou";

	printf("%d ", ft_strcmp(s1, s2));
	printf("%d ", strcmp(s1, s2));
	s1 = "coucoucoucou";
	printf("%d ", ft_strcmp(s1, s2));
	printf("%d ", strcmp(s1, s2));
}*/
