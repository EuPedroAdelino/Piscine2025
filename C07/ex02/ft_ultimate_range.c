/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <pdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:11:25 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/02/04 18:12:15 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	n;
	int	size;

	n = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = malloc(sizeof(int) * size);
	if (!array)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		array[n] = min;
		n++;
		min++;
	}
	*range = array;
	return (size);
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
	ft_ultimate_range(&array, min, max);
	printf("%i\n", ft_ultimate_range(&array, min, max));
	while (array[i] != 0)
	{
		printf("%i, ", array[i]);
		i++;
	}
	free (array)
	return (0);
}*/
