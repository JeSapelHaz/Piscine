/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 19:47:30 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/10 21:50:29 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && (i < n))
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	char *dest;
	char *src;
	unsigned int n;
	int i;

	src = "coucou";
	n = 10;
	i = 0;	
	ft_strncpy(dest, src, n);
	while(dest[i])
	{
		printf("%c", dest[i]);
		i++;
	}
}*/
