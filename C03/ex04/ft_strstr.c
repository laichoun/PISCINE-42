/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:31:03 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/23 10:34:54 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			tmp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					tmp = 1;
				i++;
			}
			if (tmp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

int	main(void)
{
	char	str[500] = "Luffy Zoro Nami!";
	char	to_find[500] = "Zo";
	char	*result = ft_strstr(str, to_find);

	if (result)
	{
		printf("Found '%s' in '%s'\n", to_find, str);
	}
	else
	{
		printf("Did not find '%s' in '%s'\n", to_find, str);
	}
	return (0);
}
