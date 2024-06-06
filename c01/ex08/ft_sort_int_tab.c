/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:14:17 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/08 17:35:47 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i <= size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int main(void)
{
	int size = 7;
	int tab[7] = {2,5,6,7,8,4,1};
	ft_sort_int_tab(tab, size);
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		printf("%d",tab[i]);
		i++;
	}
	return(0);
}*/
