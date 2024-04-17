/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:44:31 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/15 15:56:09 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_put_number(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_putchar_2(void)
{
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				ft_put_number(i, j, k);
				if (!(i == '7' && j == '8' && k == '9'))
					ft_putchar_2();
				k = k + 1;
			}
			j = j + 1;
			k = j + 1;
		}
		i = i + 1;
		j = i + 1;
		k = j + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
