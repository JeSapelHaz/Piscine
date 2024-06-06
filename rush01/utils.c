/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebauch <jdebauch@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:31:32 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/18 22:36:00 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

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

int	*ft_supp_espaces(char *str)
{
	int	i;
	int	j;
	int	taille_str;
	int	*new_str;

	new_str = (int *)malloc(sizeof(int) * 16);
	i = 0;
	j = 0;
	taille_str = ft_strlen(str);
	while (i < taille_str)
	{
		if (str[i] != ' ')
		{
			new_str[j] = str[i] - 48;
			i++;
			j++;
		}
		i++;
	}
	new_str[j + 1] = '\0';
	return (new_str);
}

int	codeok(int ac, int *av)
{
	int	i;

	i = 0;
	if (ac != 2)
		return (0);
	while (av[i])
		i++;
	if (i != 16)
		return (0);
	return (1);
}
