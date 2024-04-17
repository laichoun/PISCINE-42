/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:26:37 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/24 14:42:13 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i ++;
	}
	return (0);
}
/*
int	main(void)
{
	int	nb;
	int	result;

	printf("Entrez la valeur :");
	scanf("%d", &nb);
	result = ft_sqrt(nb);
	printf("Le resultat est : %d", result);
}*/
