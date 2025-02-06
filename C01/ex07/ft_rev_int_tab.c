/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:02:59 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/01/20 19:00:54 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	half;
	int	count;
	int	swap;
	int	temp;

	count = 0;
	half = size / 2;
	swap = size - 1;
	while (count < half)
	{
		temp = tab[0 + count];
		tab[0 + count] = tab[swap - count];
		tab[swap - count] = temp;
		count++;
	}
}

/*int	main(void)
{
	int	array[4] = { 10, 20, 30, 40 };
	int	loop;

	loop = 0;
	ft_rev_int_tab(array, 4);
	while (loop < 4)
	{
		printf("%d, ", array[loop]);
		loop++;
	}
}*/
