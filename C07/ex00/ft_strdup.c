/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:56:05 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/29 07:27:48 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*duplicate;

	i = 0;
	length = 0;
	while (src[length] != '\0')
		length ++;
	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate != NULL)
	{
		while (length > 0)
		{
			duplicate[i] = src[i];
			length --;
			i ++;
		}
		duplicate[i] = '\0';
	}
	return (duplicate);
}
/*
int	main(void)
{
	char	str[100] = "Le ONE PIECE existe";
	char	*duplicate = ft_strdup(str);

	if (duplicate != NULL)
	{
		printf("la chaine de caractère dupliquée est : %s", duplicate);
		free(duplicate);
	}
	else
		fprintf(stderr, "ALlocation de mémoire echouée");
}*/
