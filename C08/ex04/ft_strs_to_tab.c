/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <pdaniel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:15:44 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/02/06 11:37:58 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	char	*dup;

	dup = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dup)
		return (0);
	dup = ft_strcpy(dup, str);
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*strs;
	int					i;

	strs = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!strs)
		return (0);
	i = 0;
	while (i < ac)
	{
		strs[i].size = ft_strlen(av[i]);
		strs[i].str = av[i];
		strs[i].copy = ft_strdup(av[i]);
		i++;
	}
	strs[i].size = 0;
	strs[i].str = 0;
	strs[i].copy = 0;
	return (strs);
}
