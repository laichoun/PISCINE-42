/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:23:28 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/20 19:38:23 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	while (str[n] >= 48 && str[n] <= 57)
	{
		n ++;
	}
	return (str[n] == '\0');
}
/*
int	main(void)
{
	char	chaine[] = "5896565";
	int		result;

	result = ft_str_is_numeric(chaine);
	printf("Le resultat est : %d", result);
}*/
