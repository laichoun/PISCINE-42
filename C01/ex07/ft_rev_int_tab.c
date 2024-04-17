/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:52:25 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/18 12:20:46 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	debut;
	int	fin;
	int	chgt;

	debut = 0;
	fin = size - 1;
	while (debut < fin)
	{
		chgt = tab[debut];
		tab[debut] = tab[fin];
		tab[fin] = chgt;
		debut ++;
		fin --;
	}
}
