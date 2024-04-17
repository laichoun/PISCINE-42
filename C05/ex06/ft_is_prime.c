/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:23:02 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/24 14:51:24 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	diviseur;

	diviseur = 2;
	if (nb <= 1)
		return (0);
	else
	{
		while (diviseur * diviseur <= nb)
		{
			if (nb % diviseur == 0)
				return (0);
			diviseur ++;
		}
	}
	return (1);
}
/*
int	main(void)
{
	int	nb;
	int	result;

	printf("Entrez le nombre voulu :");
	scanf("%d", &nb);
	result = ft_is_prime(nb);
	printf("Si le resultat = 1 le nombre est premier sinon non : %d", result);
}*/
