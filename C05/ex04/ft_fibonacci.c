/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:30:20 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/24 14:39:41 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_fibonacci(int index)
{
	int	a;
	int	b;
	int	c;
	int	n;

	a = 0;
	b = 1;
	n = 0;
	if (index == 0)
		return (a);
	else if (index == 1)
		return (b);
	else if (index < 0)
		return (-1);
	else
	{
		c = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (c);
}
/*
int	main(void)
{
	int	index;
	int	result;

	printf("Entrez l'index pour calculer la suite :");
	scanf("%d", &index);
	result = ft_fibonacci(index);
	printf("À l'index :%d, le resultat est : %d", index, result);
}*/
