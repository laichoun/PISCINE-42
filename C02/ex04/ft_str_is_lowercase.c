/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:43:07 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/20 20:02:52 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] >= 97 && str[n] <= 122)
	{
		n++;
	}
	return (str[n] == '\0');
}
/*
int	main(void)
{
	char	chaine[] = "monkeydluffy";
	int		resultat;

	resultat = ft_str_is_lowercase(chaine);
	printf("Le resultat est : %d", resultat);
}*/
