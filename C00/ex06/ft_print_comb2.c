/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:41:08 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/01/17 10:56:34 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_numbers(a / 10 + '0');
			ft_print_numbers(a % 10 + '0');
			write(1, " ", 1);
			ft_print_numbers(b / 10 + '0');
			ft_print_numbers(b % 10 + '0');
			if (!(a == 98 && b == 99))
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			b++;
		}
		a++;
	}
}

//int	main(void)
//{
//	ft_print_comb2();
//}
