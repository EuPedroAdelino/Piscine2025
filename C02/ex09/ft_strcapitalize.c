/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:57:13 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/01/23 16:17:01 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	caps(char a) // verifica maiusculas
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	notcaps(char a) // verifica minusculas
{
	if (a >= 97 && a <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	symbol(char a) // verifica simbolos
{
	if ((a >= 32 && a <= 47)
		|| (a >= 58 && a <= 64)
		|| (a >= 91 && a <= 96)
		|| (a >= 123 && a <= 126))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	number(char a) // verifica numeros
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	ft_strcapitalize(char *str) // funcao exercicio
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((symbol(str[i - 1]) && notcaps(str[i])) || notcaps(str[0]))
		{
			str[i] -= 32;
		}
		if (caps(str[i]) && (caps(str[i - 1])
				|| notcaps(str[i - 1]) || number(str[i -1])))
		{
			str[i] += 32;
		}
		i++;
	}
	return (*str);
}

/*int	main(void)
{
	char	s[30] = "bOAs esTa +string 46Testa =sE";

	printf("%s\n", s);
	ft_strcapitalize(s);
	printf("%s", s);
	return (0);
}*/
