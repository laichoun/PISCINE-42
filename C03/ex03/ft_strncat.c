/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:00:06 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/23 08:53:33 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i ++;
	while ((src[j] != '\0') && (j < nb))
	{
		dest[i] = src [j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	machaine1[100] = "Luffy deviendra ";
	char	machaine2[100] = "le roi des pirates";

	ft_strncat(machaine1, machaine2, 7);
	printf("Ma phrase est : %s", machaine1);
}*/
