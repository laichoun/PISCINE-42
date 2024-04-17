/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:54:34 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/20 19:50:47 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 97 && str[n] <= 122)
			str[n] = str[n] - 32;
		n ++;
	}
	return (str);
}
/*
int	main(void)
{
	char	machaine[] = " monkeyDLuffy";

	ft_strupcase(machaine);
	printf("La phrase est : %s", machaine);
}*/
