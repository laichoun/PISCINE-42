/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:41:44 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/24 14:34:41 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			result = nb * result;
			power --;
		}
	}
	return (result);
}
/*
int	main(void)
{
	int	nb;
	int	power;
	int	result;

	printf("Saisissez le nombre :");
	scanf("%d", &nb);

	printf("Saisissez la puissance :");
	scanf("%d", &power);

	result = ft_iterative_power(nb, power);
	printf("Le resultat de : %d puissance %d est : %d", nb, power, result);
}*/
