/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:14:47 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/29 17:48:35 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*result;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	result = (int *)malloc(size * sizeof(int));
	if (result != NULL)
	{
		while (i < size)
		{
			result[i] = min + i;
			i ++;
		}
	}
	return (result);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*result;
	int	i;
	int	size;

	min = 500;
	max = 1500;
	i = 0;
	size = max - min;
	result = ft_range(min, max);
	if (result != NULL)
	{
		while (i < size)
		{
			printf("%d ", result[i]);
			i ++;
		}
		free(result);
	}
	else
		printf("Erreur");
}*/
