/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 13:36:12 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/20 12:15:00 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int get_base_length(char *base)
{
	int base_length;

	base_length = 0;
	while (base[base_length] != '\0')
	{
		base_length++;
	}
	return (base_length);
}

int analyse_base(char *base)
{
	int	base_size;
	int i;
	int ii;

	i = 0;
	base_size = get_base_length(base);

	while (base[i] != '\0')
	{
		ii = i + 1;
		while (ii < base_size)
		{
			if ((base[i] == base[ii]) || (base[i] == '+') || (base[i] == '-'))
			{
				return (0);
			}
			ii++;
		}
		i++;
	}
	return (base_size);
}

void ft_putnbr_base(int nbr, char *base)
{
	int base_size;
	long n = nbr;
	
	base_size = analyse_base(base);
	if (base_size < 2)
	{
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= base_size)
	{
		ft_putnbr_base(n / base_size, base);
	}
	write(1, &(base[n % base_size]), 1);
}

#include <stdio.h>
int main()
{
	char base_dec[] = "0123456789";

	char base_bin[] = "01";
	char base_hex[] = "0123456789ABCDEF";
	char base_oct[] = "poneyvif";
	char base_quad[] = "lmao";

	int number_to_convert = 4;

	// ft_putnbr_base(number_to_convert, base_bin);
	// printf(" = %d(int) converted to '%s'(bin) system\n", number_to_convert, base_bin);

	// ft_putnbr_base(number_to_convert, base_hex);
	// printf(" = %d(int) converted to '%s'(hex) system\n", number_to_convert, base_hex);

	// ft_putnbr_base(number_to_convert, base_oct);
	// printf(" = %d(int) converted to '%s'(oct) system\n", number_to_convert, base_oct);

	ft_putnbr_base(number_to_convert, base_quad);
	printf(" = %d(int) converted to '%s'(quad) system\n", number_to_convert, base_quad);

	return (0);
}
