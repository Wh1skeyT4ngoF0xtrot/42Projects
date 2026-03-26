/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 10:45:07 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 20:00:02 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		result = (result * nb);
		power--;
	}
	return (result);
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int number = -2;
// 	int power = 3;
// 	int result = ft_iterative_power(number, power);
// 	printf("%d^%d = %d \n", number, power, result);
// }
