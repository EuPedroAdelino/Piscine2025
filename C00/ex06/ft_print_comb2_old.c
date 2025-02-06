/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:55:30 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/01/16 13:08:28 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_first_pair(int a, int b)
{
	a = '0';
	while ( a <= '9' )
	{
		b = '0';
		while ( b <= '9' )
		{
			write(1, &a, 1);
			write(1, &b, 1);
			if(a == '9' && b == '8') break;
			write(1, " ", 1);
			b++;
		}
	a++;
	}
}

void    ft_second_pair(int c, int d)
{
	c = '0';
	while ( c <= '9' )
	{
		d = '0';
		while ( d <= '9' )
		{
			write(1, &c, 1);
			write(1, &d, 1);
			write(1, ",", 1);
			write(1, " ", 1);
			d++;
			}
	c++;
	}
}

void	ft_print_comb2(void)
{
	ft_first_pair(0, 0);
	ft_second_pair(0, 0);
}

int	main(void)
{
	ft_print_comb2();
}
