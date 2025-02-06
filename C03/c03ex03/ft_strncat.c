/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:02:40 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/01/22 17:36:00 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	tamdest;
	unsigned int	tamsrc;

	tamdest = 0;
	tamsrc = 0;
	while (dest[tamdest] != 0)
	{
		tamdest++;
	}
	while ((src[tamsrc] != 0) && (tamsrc < nb))
	{
		dest[tamdest + tamsrc] = src[tamsrc];
		tamsrc++;
	}
	dest[tamdest + tamsrc] = 0;
	return (dest);
}

/*int	main(void)
{
	char	str1[13] = " mesmoistonao";
	char	str2[33] = "Funciona";

	printf("%s \n", strncat(str2, str1, 6));
	printf("%s", ft_strncat(str2, str1, 6));
}*/
