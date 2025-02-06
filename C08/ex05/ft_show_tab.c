/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <pdaniel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:12:38 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/02/04 18:03:29 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char c)
{
	write(1, &c, 1);
}

void	printnumb(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		printchar(-);
		printnumba(-nb);
	}
	if (nb > 9)
	{
		printchar((nb / 10) + '0');
		printchar((nb % 10) + '0');
	}
	if (nb >= 0 && nb  <= 9)
		
}

void	strprint(char *str)
{
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{

}
