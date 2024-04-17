/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:11:22 by laichoun          #+#    #+#             */
/*   Updated: 2024/01/15 15:57:18 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

// Creation function 
void	ft_print_reverse_alphabet(void)
{
	write (1, "zyxwvutsrqponmlkjihgfedcba", 26);
}
/*
// Execution
int	main(void)
{
	ft_print_reverse_alphabet();
}*/
