/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <pdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:00:32 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/02/04 18:10:55 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	stleng(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		cycle;
	int		lenght;
	char	*dest;

	cycle = 0;
	lenght = stleng(src);
	dest = malloc(sizeof(char) * (lenght + 1));
	if (dest == NULL)
		return (0);
	while (src[cycle])
	{
		dest[cycle] = src[cycle];
		cycle++;
	}
	dest[cycle] = '\0';
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char	*str = "Ta tudo certo aqui";

	printf("%s", ft_strdup(str));
}*/
