/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdaniel- <pdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:26:48 by pdaniel-          #+#    #+#             */
/*   Updated: 2025/02/03 18:20:13 by pdaniel-         ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	argc = 1;
	while (i < argc)
	{
		writestring(*argv);
		i++;
	}
	write(1, "\n", 1);
}
