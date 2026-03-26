/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 11:00:36 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:58:48 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	num_to_array(long nb)
{
	char	reversed_number[12];
	int		i;

	i = 0;
	if (nb == 0)
	{
		reversed_number[0] = '0';
		write(1, &reversed_number[0], 1);
		return ;
	}
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		reversed_number[i] = (nb % 10) + '0';
		nb = (nb / 10);
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &reversed_number[i--], 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		num_to_array(-(long)nb);
	}
	else
	{
		num_to_array((long)nb);
	}
}

// int main()
// {
// 	//int any_number1 = 42;
// 	// int any_number2 = -42;
// 	// int any_number3 = 0;d
// 	int any_number4 = -2147483648;
// 	//int any_number5 = 2147483647;
// 	// ft_putnbr(any_number1);
// 	// ft_putnbr(any_number2);
// 	// ft_putnbr(any_number3);
// 	ft_putnbr(any_number4);
// 	//ft_putnbr(any_number5);
// 	return(0);
// }
