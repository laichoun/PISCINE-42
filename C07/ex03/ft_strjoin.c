/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laichoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:54:56 by laichoun          #+#    #+#             */
/*   Updated: 2024/02/28 13:12:08 by laichoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

char	ft_final_length(int size, char **strs, char len_sep)
{
	int		final_length;
	int		i;

	final_length = 0;
	i = 0;
	while (i < size)
	{
		final_length += ft_strlen(strs[i]);
		final_length += len_sep;
		i ++;
	}
	final_length -= len_sep;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		i;
	char	*result;
	char	*string;

	i = 0;
	full_length = ft_final_length(size, strs, ft_strlen(sep));
	result = (char *)malloc((full_length + 1) * sizeof(char));
	if (size == 0 || result == NULL)
		return ((char *)malloc(sizeof(char)));
	string = result;
	while (i < size)
	{
		ft_strcpy(result, strs[i]);
		result = result + ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(result, sep);
			result = result + ft_strlen(sep);
		}
		i ++;
	}
	*result = '\0';
	return (string);
}

int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int		size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = "Le";
	strs[1] = "ONE PIECE,";
	strs[2] = "EXISTE";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}
