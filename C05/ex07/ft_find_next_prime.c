/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <pdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:01:48 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/01/30 13:03:04 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	if (nb == 4 || nb == 6)
		return (0);
	if (nb > 7 && (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0 || nb % 7 == 0))
		return (0);
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	else
		return (1);
}

int	ft_find_next_prime(int nb)
{
	int	n;

	n = 0;
	while (ft_is_prime(nb + n) != 1)
		n++;
	return (nb + n);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%i", ft_find_next_prime(3));
}*/
