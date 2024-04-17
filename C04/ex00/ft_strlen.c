/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:25:49 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/23 11:04:30 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}
/*
int	main(void)
{
	char	str[100] = "Luffy deviendra le roi des pirates";
	int		result;

	result = ft_strlen(str);
	printf("La longueur de ma chaine de caractère est : %d", result);
}*/
