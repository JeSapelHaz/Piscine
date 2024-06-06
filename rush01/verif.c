/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebauch <jdebauch@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:03:17 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/18 22:40:13 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	doublon(int tab[4][4], int hauteur, int position);
int	colhaut(int tab[4][4], int position, int *arguments);
int	colbas(int tab[4][4], int position, int *arguments);
int	rangau(int tab[4][4], int position, int *arguments);
int	randro(int tab[4][4], int position, int *arguments);

int	verif(int tab[4][4], int position, int *arguments, int hauteur)
{
	if (doublon(tab, hauteur, position) == 0)
		return (0);
	if (colhaut(tab, position, arguments) == 0)
		return (0);
	if (colbas(tab, position, arguments) == 0)
		return (0);
	if (rangau(tab, position, arguments) == 0)
		return (0);
	if (randro(tab, position, arguments) == 0)
		return (0);
	return (1);
}
