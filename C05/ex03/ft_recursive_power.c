/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 11:08:05 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 20:00:26 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int number = 2;
// 	int power = 3;
// 	int result = ft_recursive_power(number, power);
// 	printf("%d^%d = %d \n", number, power, result);
// 	return (0);
// }