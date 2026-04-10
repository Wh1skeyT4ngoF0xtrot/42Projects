/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 13:36:12 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/07 20:38:01 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int analyse_base(char *base)
{
	int	base_size;
	int i;

	i = 0;
	base_size = 0;
	while (base[base_size] != '\0')
	{
		base_size++;
	}
	if ((base_size < 2))
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		if ((base[i] == base[i + 1]) || (base[i] == '-') || (base[i] == '+'))
		{
			return (0);
		}
		i++;
	}
	return (base_size);
}

void ft_putnbr_base(int nbr, char *base)
{
	int base_size = analyse_base(base);
	long n = nbr;
	
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

// #include <stdio.h>
// int main()
// {
// 	char base_bin[] = "01";
// 	char base_dec[] = "0123456789";
// 	char base_hex[] = "0123456789ABCDEF";
// 	char base_oct[] = "poneyvif";

// 	int number_to_convert = 42;

// 	// printf(" = %d(int) converted to bin\n", number_to_convert);
// 	// ft_putnbr_base(number_to_convert, base_bin);

// 	// printf(" = %d(int) converted to hex\n", number_to_convert);
// 	// ft_putnbr_base(number_to_convert, base_hex);

// 	printf(" = %d(int) converted to oct\n", number_to_convert);
// 	ft_putnbr_base(number_to_convert, base_oct);

// 	return (0);
// }
