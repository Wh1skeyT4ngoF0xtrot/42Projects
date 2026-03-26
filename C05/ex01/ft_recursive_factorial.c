/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 18:19:36 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:59:42 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int number = 4;
// 	int factorial = ft_recursive_factorial(number);
// 	printf("%d! = %d \n", number, factorial);
// 	return (0);
// }