/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cond.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebauch <jdebauch@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:09:47 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/18 22:34:45 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	doublon(int tab[4][4], int hauteur, int position)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < (position / 4))
	{
		if (tab[j][position % 4] == hauteur)
			return (0);
		j++;
	}
	while (i < (position % 4))
	{
		if (tab[position / 4][i] == hauteur)
			return (0);
		i++;
	}
	return (1);
}

int	colhaut(int tab[4][4], int position, int *arguments)
{
	int	j;
	int	tours;
	int	hauteur;

	j = 0;
	tours = 0;
	hauteur = 0;
	if (position / 4 == 3)
	{
		while (j <= 3)
		{
			if (tab[j][position % 4] > hauteur)
			{
				hauteur = tab[j][position % 4];
				tours++;
			}
			j++;
		}
		if (arguments[position % 4] != tours)
			return (0);
	}
	return (1);
}

int	colbas(int tab[4][4], int position, int *arguments)
{
	int	j;
	int	tours;
	int	hauteur;

	j = 3;
	tours = 0;
	hauteur = 0;
	if (position / 4 == 3)
	{
		while (j >= 0)
		{
			if (tab[j][position % 4] > hauteur)
			{
				hauteur = tab[j][position % 4];
				tours++;
			}
			j--;
		}
		if (arguments[4 + position % 4] != tours)
			return (0);
	}
	return (1);
}

int	rangau(int tab[4][4], int position, int *arguments)
{
	int	i;
	int	hauteur;
	int	tours;

	i = 0;
	tours = 0;
	hauteur = 0;
	if (position % 4 == 3)
	{
		while (i <= 3)
		{
			if (tab[position / 4][i] > hauteur)
			{
				hauteur = tab[position / 4][i];
				tours ++;
			}
			i++;
		}
		if (arguments[8 + position / 4] != tours)
			return (0);
	}
	return (1);
}

int	randro(int tab[4][4], int position, int *arguments)
{
	int	i;
	int	hauteur;
	int	tours;

	i = 3;
	tours = 0;
	hauteur = 0;
	if (position % 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[position / 4][i] > hauteur)
			{
				hauteur = tab[position / 4][i];
				tours ++;
			}
			i--;
		}
		if (arguments[12 + position / 4] != tours)
			return (0);
	}
	return (1);
}
