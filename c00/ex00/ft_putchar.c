/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:41:02 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/07 18:16:30 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//la biblio doit etre ajoutee pour utiliser la fonction write

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
 *
 * int main (void)
 * {
 * ft_putchar();
 * return(0);
 * }
 */
