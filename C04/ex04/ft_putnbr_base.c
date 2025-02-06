/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:05:46 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/01/27 14:32:11 by pdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_compare(char *str, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		while (str2[j] != 0)
		{
			if ((str[i] == str2[j]) && (i != j))
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == 43 || str[i] == 45)
		{
			return (0);
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lenght;
	long	grande;

	lenght = 0;
	lenght = ft_strlen(base);
	grande = nbr;
	if ((lenght == 0 || lenght == 1) || ft_compare(base, base) == 1)
	{
		return ;
	}
	if (grande < 0)
	{
		write(1, "-", 1);
		grande = grande * -1;
	}
	if (grande >= lenght)
	{
		ft_putnbr_base(grande / lenght, base);
		ft_putnbr_base(grande % lenght, base);
	}
	if (grande >= 0 && grande < lenght)
	{
		write(1, &base[grande], 1);
	}
}

/*int	main(void)
{
	int	num;
	char	base[] = "0123456789ABCDE";

	num = 30;
	ft_putnbr_base(num, base);
}*/
