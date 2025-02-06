/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:15:56 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/01/16 17:28:34 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_comb2(int a, int b, int c, int d)
{
        a = '0';
        while ( a <= '9' )
        {
                b = '0';
                while ( b <= '9' )
                {
                        if(a == '9' && b == '9') break;
			c = '0';
			while ( c <= '9' )
			{
				d = b + 1;
				while ( d <= '9' )
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, " ", 1);
					write(1, &c, 1);
					write(1, &d, 1);
					write(1, ",", 1);
					write(1, " ", 1);
					d++;
				}
			c++;
			}
                b++;
                }
        a++;
        }
}

int     main(void)
{
        ft_print_comb2( 0, 0, 0, 0);
}
