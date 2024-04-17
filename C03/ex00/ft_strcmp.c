/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:50:46 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/23 08:51:31 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i ++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "Asma";
	char	s2[] = "Amel";
	int		result;

	result = ft_strcmp(s1, s2);
	if (result == 0)
		printf("La chaine de caractère est la même");
	else if (result < 0)
		printf("La chaine S1 vient avant la chaine S2");
	else
		printf("La chaine S1 vient après la chaine S2");
}*/
