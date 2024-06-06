/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:44:25 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/09 11:31:46 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	j = size - 1;
	temp = 0;
	while (i < size / 2)
	{
		temp = tab[j];
		tab[j] = tab[i];
		tab[i] = temp;
		j--;
		i++;
	}
}
/*
int main(void)
{
	int size = 7;
	int tab[7] = {2,5,6,7,8,4,1};
	int tab2[8] = {2,3,5,6,7,8,4,1};
	int	m;
	int n;
	ft_rev_int_tab(tab, size);
	ft_rev_int_tab(tab2, 8);

	m = 0;
	while (m < 7)
	{
		printf("%d ",tab[m]);
		m++;
	}
	n =0;
	printf("\n");
	while (n < 8)
	{
		printf("%d | ", tab2[n]);
		n++;
	}
		return(0);
}*/
