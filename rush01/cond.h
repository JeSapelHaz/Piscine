/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cond.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:03:28 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/18 21:19:35 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COND_H
#define COND_H

int	doublon(int tab[4][4], int hauteur, int position);
int	colhaut(int tab[4][4], int position, int *arguments);
int	colbas(int tab[4][4], int position, int *arguments);
int	rangau(int tab[4][4], int position, int *arguments);
int	randro(int tab[4][4], int position, int *arguments);

#endif
