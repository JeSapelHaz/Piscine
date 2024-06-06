/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebauch <jdebauch@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 10:51:06 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/18 22:51:09 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_solved(int tab[4][4]);
int		solve(int tab[4][4], int position, int *arguments);
int		codeok(int ac, int *av);
void	ft_putstr(char *str);
int		*ft_supp_espaces(char *str);

int	test(int ac, int *arguments)
{
	if (codeok(ac, arguments) == 0)
	{
		ft_putstr("Error");
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	tab[4][4];
	int	i;
	int	j;
	int	*arguments;

	arguments = ft_supp_espaces(av[1]);
	i = 0;
	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			tab[j][i] = 0;
			i++;
		}
		j++;
	}
	if (test(ac, arguments) == 0)
		return (0);
	if (solve(tab, 0, arguments) == 1)
		print_solved(tab);
	else
		ft_putstr("Error");
	return (0);
}
