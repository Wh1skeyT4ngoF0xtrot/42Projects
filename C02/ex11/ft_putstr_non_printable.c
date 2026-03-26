/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 15:37:38 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:50:37 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert_to_hex(int dec_num, int test)
{
	char	hex[16];
	int		remainder;
	int		i;
	int		x;

	i = 0;
	while (dec_num > 0)
	{
		remainder = dec_num % 16;
		if (remainder < 10)
			hex[i++] = remainder + '0';
		else
			hex[i++] = remainder + 'a' - 10;
		dec_num = (dec_num / 16);
	}
	x = (i - 1);
	if (test == 0)
		write(1, "0", 1);
	while (x >= 0)
	{
		write(1, &hex[x], 1);
		x--;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		test;

	i = 0;
	test = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			if (str[i] > 15)
			{
				test = 1;
			}
			convert_to_hex(str[i], test);
		}
		i++;
	}
}
