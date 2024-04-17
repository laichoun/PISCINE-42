/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:10:20 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/30 12:10:57 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(size * sizeof(int));
	if (*range != NULL)
	{
		while (i < size)
		{
			(*range)[i] = min + i;
			i ++;
		}
		return (size);
	}
	else
		return (-1);
}

int	main(void)
{
	int	*result;
	int	size;
	int	min;
	int	max;
	int	i;

	i = 0;
	min = 5;
	max = 15;
	size = ft_ultimate_range(&result, min, max);
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
		printf("Error");
}
