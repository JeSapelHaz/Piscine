/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebauch <jdebauch@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:34:39 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/18 22:50:42 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		verif(int tab[4][4], int position, int *arguments, int hauteur);
void	ft_putchar(char c);

void	print_solved(int tab[4][4])
{
	int	i;
	int	j;

	j = -1;
	while (++j < 4)
	{
		i = 0;
		while (i < 4)
		{
			ft_putchar(tab[j][i] + 48);
			if (i < 3)
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
	}
}

int	solve(int tab[4][4], int position, int *arguments)
{
	int	hauteur;

	if (position == 16)
		return (1);
	hauteur = 1;
	while (hauteur <= 4)
	{
		tab[position / 4][position % 4] = hauteur;
		if (verif(tab, position, arguments, hauteur) == 1)
		{
			if (solve(tab, position + 1, arguments) == 1)
				return (1);
		}
		tab[position / 4][position % 4] = 0;
		hauteur++;
	}
	return (0);
}
