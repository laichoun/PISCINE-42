/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:32:54 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/20 09:57:16 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i < n))
	{
		dest[i] = src [i];
		i ++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
/*
int	main(void)
{
	char	source[] = "Fortune gloire et pouvoir.";
	char	destination [100] = "";

	ft_strncpy(destination, source, 70);
	printf("La chaine de destination est : %s", destination);
}*/
