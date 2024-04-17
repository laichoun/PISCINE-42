/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:58:34 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/20 20:01:18 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char	*str)
{
	int	n;

	n = 0;
	while ((str[n] >= 'A' && str[n] <= 'Z') || (str[n] >= 'a' && str[n] <= 'z'))
	{
		n ++;
	}
	return (str[n] == '\0');
}
/*
int	main(void)
{
	char	str[] = "Bdfjjfidjfifdjfj";
	int		result;

	result = ft_str_is_alpha(str);
	printf("Le resultat est : %d", result);
}*/
