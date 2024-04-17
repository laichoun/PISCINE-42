/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:15:51 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/18 10:38:47 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	resultat_div;
	int	resultat_mod;

	x = 85;
	y = 6;
	ft_div_mod(x, y, &resultat_div, &resultat_mod);
	printf("Le quotient est : %d, le modulo est : %d", resultat_div, resultat_mod);
}*/
