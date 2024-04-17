/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:13:57 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/24 14:36:25 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
int	main(void)
{
	int	power;
	int	nb;
	int	result;

	printf("Saisissez la valeur : ");
	scanf("%d", &nb);
	printf("Saisissez la puissance :");
	scanf("%d", &power);
	result = ft_recursive_power(nb, power);
	printf("Le resultat de : %d puissance %d est : %d", nb, power, result);
}*/
