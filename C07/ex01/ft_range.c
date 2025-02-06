/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <pdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:27:03 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/02/04 18:54:30 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	n;
	int	size;

	n = 0;
	if (min >= max)
	{
		array = NULL;
		return (array);
	}
	size = max - min;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	while (min < max)
	{
		array[n] = min;
		n++;
		min++;
	}
	return (array);
}

/*#include <stdio.h>
int	main(void)
{
	int	*array;
	int	i;
	int	min;
	int	max;

	min = 1;
	max = 20;
	i = 0;
	array = ft_range(min, max);
	while (array[i] != 0)
	{
		printf("%i, ", array[i]);
		i++;
	}
	free (array);
	return (0);
}*/
