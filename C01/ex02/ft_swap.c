/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:05:40 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/18 10:14:23 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	chgt;

	chgt = *a;
	*a = *b;
	*b = chgt;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 3;
	y = 2;
	ft_swap(&x, &y);
	printf("La valeur de x = %d, La valeur de y est : %d", x, y);
}*/
