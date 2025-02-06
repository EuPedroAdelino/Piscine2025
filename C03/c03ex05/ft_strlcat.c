/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:58:02 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/01/23 16:40:26 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	check_size(char *a)
{
	int	tam;

	tam = 0;
	while(a[tam] != 0)
	{
		tam++;
	}
	return (tam);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_src;
	unsigned int	size_dest;
	unsigned int	wrt;

	size_src = 0;
	size_dest = 0;
	wrt = 0;
	size_src = check_size(src);
	size_dest = check_size(dest);
	if ((size_dest - 1) > size)
	{
		return (size_dest + size_src);
	}
	else if ((wrt < size) && (src[wrt] != 0))
	{
		dest[size_dest + wrt] = src[wrt];
		wrt++;
	}
	dest[size_dest + wrt] = 0;
	return (0);
}

/*int	main(void)
{
	char	str1[9] ="funciona";
	char	str2[11] ="Por favor ";

	printf("%u", ft_strlcat(str2, str1, 18));
	printf("%i, %s", strlcat(str2, str1, 20));
}*/
