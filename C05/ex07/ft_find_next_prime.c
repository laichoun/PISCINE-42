/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:07:17 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/24 14:53:22 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_find_next_prime(int nb)
{
	int	diviseur;

	diviseur = 1;
	if (nb <= 0)
		return (0);
	while (diviseur * diviseur <= nb)
	{
		if (nb % diviseur == 0)
			nb ++;
		diviseur ++;
	}
	return (nb);
}
/*
int	main(void)
{
	int	nb;
	int	result;

	printf("Entrez la valeur :");
	scanf("%d", &nb);
	result = ft_find_next_prime(nb);
	printf("La valeur première est : %d", result);
}*/
