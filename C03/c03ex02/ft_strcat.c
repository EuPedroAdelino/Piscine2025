/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:35:14 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/01/22 15:01:03 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	tamdest;
	int	tamsrc;

	tamdest = 0;
	tamsrc = 0;
	while (dest[tamdest] != 0)
	{
		tamdest++;
	}
	while (src[tamsrc] != 0)
	{
		dest[tamsrc + tamdest] = src[tamsrc];
		tamsrc++;
	}
	dest[tamsrc + tamdest] = 0;
	return (dest);
}

/*int	main(void)
{
	char str1[7] = " mesmo";
	char str2[33] = "Funciona";

	printf("%s\n", strcat(str2, str1));
	printf("%s\n", ft_strcat(str2, str1));
}*/
