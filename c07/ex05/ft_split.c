/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:13:27 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/25 13:58:59 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int ft_strlen(char *src)
{
	int i;

	i = -1;
	while (src[++i])
		;
	return (i);
}

int boolcharset(char *charset)
{

}

int countstr(char *str, char *charset)
{
	int count;
	int i;
	int j;

	count = 0;
	j = -1;
	i = -1;
	while(str[++i])
	{
		while (charset[++j])
		{
			if (str[i] != charset[j])
			count++;	
		}
	}
	return (count);
}
#include <stdlib.h>

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int i;
	int lenstr;
	int lenset;
	int count;
	int lastword;
	int j;

	lastword = 0;
	i = -1;
	count = -1;
	lenstr = ft_strlen(str);
	lenset = ft_strlen(charset);
	**split = malloc(sizeof(char*) * countstr(str, charset));
	while(str[++i])
	{
		j = -1;
		while(charset[++j])
		{
			if (str[i] == charset[j])
			{
				*split = malloc(sizeof(char) * (i - lastword)); 
				*split[++count] = &str[i];
				lastword = i;
			}
		}
	}
	return (split);
}

int main(void)
{
	char *str = "salutbcommentbcabvab";
	char *charset = "b";
	ft_split(str, charset);
}*/
