/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:18:56 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/08 15:33:41 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
	int a;
	int b;
	int i = 0;
	int j = 0;

	a = 42;
	b = 19;
	int *d = &i;
	int *m = &j;
	ft_div_mod(a, b, d, m);
	printf("%d %d %d %d", a, b, *d, *m);
	return(0);	
}*/
