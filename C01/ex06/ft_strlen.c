/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:23:15 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/18 11:29:59 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		n ++;
		str ++;
	}
	return (n);
}
/*
int	main(void)
{
	int	longueur;

	longueur = ft_strlen("Je m'appelle Asma");
	printf("La longueur de la chaine est : %d", longueur);
}*/
