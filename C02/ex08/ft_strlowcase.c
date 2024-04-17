/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:27:10 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/20 19:51:57 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 65 && str[n] <= 90)
			str[n] = str[n] + 32;
		n ++;
	}
	return (str);
}
/*
int	main(void)
{
	char	chaine[] = "MoNkEyDluFFy";

	ft_strlowcase(chaine);
	printf("Le resultat est : %s", chaine);
}*/
