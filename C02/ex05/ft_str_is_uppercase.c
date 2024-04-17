/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:33:42 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/20 20:05:36 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] >= 65 && str[n] <= 90)
	{
		n ++;
	}
	return (str[n] == '\0');
}
/*
int	main(void)
{
	char	machaine[] = "MONKEYDLUFFY";
	int		result;

	result = ft_str_is_uppercase(machaine);
	printf("Le resutlat est : %d", result);
}*/
