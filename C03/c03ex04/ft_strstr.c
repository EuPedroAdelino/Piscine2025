/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:20:21 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/01/26 16:46:46 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	find_size(char *c)
{
	int	size;

	size = 0;
	while (c[size] != 0)
		size++;
	return (size);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		size;
	int		pos;
	int		check;

	size = 0;
	pos = 0;
	if (to_find[0] == 0)
		return (str);
	size = find_size(to_find);
	while (str[pos] != 0)
	{
		if (str[pos] == to_find[0])
		{
			check = 0;
			while (to_find[check] != 0 && str[pos + check] == to_find[check])
				check++;
			if (check == size)
				return (&str[pos]);
		}
		pos++;
	}
	return (0);
}

/*int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "Nao se pfreocupem, nunca faria uma coisa dessas";
	str2 = "faria";
	printf("%s\n", strstr(str1, str2));
	printf("%s\n", ft_strstr(str1, str2));
}*/
