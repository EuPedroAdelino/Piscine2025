/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <pdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:55:24 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/02/03 18:23:58 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writestring(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	strgcomp(char *st1, char *st2)
{
	int	i;

	i = 0;
	while (st1[i] != 0 || st2[i] != 0)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}

void	strsort(char **s1, char **s2)
{
	char	*tempstring;

	tempstring = *s1;
	*s1 = *s2;
	*s2 = tempstring;
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (strgcomp(argv[i], argv[j]) > 0)
			{
				strsort(&argv[i], &argv[j]);
			}
			j++;
		}
		i++;
	}
	j = 1;
	while (j < argc)
	{
		writestring(argv[j]);
		write(1, "\n", 1);
		j++;
	}
}
