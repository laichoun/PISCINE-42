/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:59:05 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/30 14:22:25 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 1;
	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i <= nb)
		{
			result *= i;
			i ++;
		}
	}
	return (result);
}

int	main(void)
{
	int	n;

	printf("Saisissez la valeur :");
	scanf("%d", &n);
	ft_iterative_factorial(n);
	printf("Le factoriel de : %d est : %d", n, ft_iterative_factorial(n));
}
