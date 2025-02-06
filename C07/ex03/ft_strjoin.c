/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <pdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:24:58 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/02/04 18:12:42 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	leng(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	ft_totaleng(int size, char **array, int sep_size)
{
	int	i;
	int	totaleng;

	i = 0;
	totaleng = 0;
	while (i < size)
	{
		totaleng += leng(array[i]);
		totaleng += sep_size;
		i++;
	}
	totaleng -= sep_size;
	return (totaleng);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		sep_size;
	int		totaleng;
	char	*newstr;

	if (size == 0)
		return (newstr = malloc(sizeof(char)));
	i = 0;
	sep_size = leng(sep);
	totaleng = ft_totaleng(size, strs, sep_size);
	newstr = malloc(sizeof(char) * (totaleng + 1));
	if (!newstr)
		return (NULL);
	while (i < size)
	{
		ft_strcpy(newstr, strs[i]);
		newstr += leng(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(newstr, sep);
			newstr += leng(sep);
		}
		i++;
	}
	return (newstr - totaleng);
}
