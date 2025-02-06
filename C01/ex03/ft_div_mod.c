/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:32:22 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/01/21 13:29:48 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a - (b * *div);
}

/*int	main(void)
{
	int	x;
	int	y;
	int	d;
	int	r;

	x = 5;
	y = 2;
	d = 0;
	r = 0;
	ft_div_mod(x, y, &d, &r);
	printf("Resultado %i, resto %i", d, r);
}*/
