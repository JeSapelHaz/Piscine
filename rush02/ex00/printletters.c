/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copyfile.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:55:46 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/25 20:34:40 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	conversion(char *dico, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (dico[i])
	{
		if (dico[i] == str[0])
		{
			k = i;
			j = 0;
			while (dico[k] == str[j])
			{
				if (str[j + 1] == '\0')
				{
					return (i);
				}
				k++;
				j++;
			}
		}
		i++;
	}
	return (0);
}

void	print_letters(char *str, int i)
{
	while (str[i] < 'a' || str[i] > 'z')
	{
		i++;
	}
	while (str[i] >= 'a' && str[i] <= 'z')
	{
		write(1, &str[i], 1);
		i++;
	}
}
