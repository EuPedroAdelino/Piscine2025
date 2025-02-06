/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <pdaniel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:01:29 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/02/02 18:02:57 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void 	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int 	main(void)
{
	t_point 	point;
	
	set_point(&point);
	return (0);
}
