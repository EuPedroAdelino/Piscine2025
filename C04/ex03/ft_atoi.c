/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:32:15 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/01/25 22:37:48 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	finalcheck(int i, char *str)
{
	int	final;

	final = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 48 && str[i] <= 57)
			final = (10 * final) + (str[i] - 48);
		if (str[i] < 48 || str[i] > 57)
			return (final);
		i++;
	}
	return (final);
}

int	ft_atoi(char *str)
{
	int	i;
	int	parouimpar;
	int	final;

	i = 0;
	parouimpar = 1;
	final = 0;
	while (str[i] != 0 && (str[i] < 48))
	{
		if ((str[i] < 32 && str[i] > 13) || (str[i] > 32 && str[i] < 43)
			|| str[i] == 44 || (str[i] > 45 && str[i] < 48))
			return (0);
		if (str[i] == 32 || 9 >= str[i] || str[i] <= 13)
			i++;
		if (str[i] == 45)
			parouimpar = parouimpar * -1;
		i++;
	}
	final = finalcheck(i, str);
	return (final * parouimpar);
}

/*int	main(void)
{
	char	st1[19] = "  \t \f \n1234ab567";

	printf("%i", ft_atoi(st1));
}*/
