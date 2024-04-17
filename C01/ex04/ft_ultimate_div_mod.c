/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:40:28 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/18 10:58:02 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	chgt;

	chgt = *a;
	*a = chgt / *b;
	*b = chgt % *b;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 15;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	printf("Le quotient est : %d, le modulo est : %d", x, y);
}*/
