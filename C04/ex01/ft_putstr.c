/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:32:43 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/23 11:05:41 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	write (1, str, i);
}
/*
int	main(void)
{
	char	str[100] = "Monkey d luffy";

	ft_putstr(str);
}*/
