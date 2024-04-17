/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:49:33 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/20 14:07:40 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	n;
	int	result;

	n = 0;
	result = 0;
	while (str[n] >= 32 && str[n] <= 126)
	{
		n ++;
	}
	if (str[n] == '\0')
		result = 1;
	else if (str[n] == ' ')
		result = 1;
	else
		result = 0;
	return (result);
}
/*
int	main(void)
{
	char	machaine[] = "à$àFJSDLFKLDKLKDLKdkfjodgl35668";
	int		result;

	result = ft_str_is_printable(machaine);
	printf("Le resultat est :%d", result);
}*/
