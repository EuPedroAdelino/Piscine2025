/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <pdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:07:48 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/01/30 13:08:02 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	cycle;

	result = 1;
	cycle = 1;
	if (nb < 0)
		return (0);
	while (cycle <= nb)
	{
		result = result * cycle;
		cycle++;
	}
	return (result);
}

/*int	main(void)
{
	printf("%i", ft_iterative_factorial(7));
}*/
