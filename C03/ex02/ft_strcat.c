/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 11:49:07 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/23 08:52:28 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i ++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j ++;
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	machaine1[100] = "Luffydeviendra";
	char	machaine2[100] = "leroidespirates";

	ft_strcat(machaine1, machaine2);
	printf("Ma chaine est : %s", machaine1);
}*/
