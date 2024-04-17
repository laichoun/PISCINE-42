/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:46:19 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/24 14:27:36 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	int	n;

	printf("Saisissez la valeur :");
	scanf("%d", &n);
	ft_recursive_factorial(n);
	printf("La valeur de factoriel : %d est : %d", n, ft_recursive_factorial(n));
}*/
