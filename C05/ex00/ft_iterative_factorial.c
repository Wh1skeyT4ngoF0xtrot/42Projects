/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 12:45:13 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:59:26 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb == 0 || nb == 1)
		result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 1)
	{
		while (nb > 1)
		{
			result = (result * (nb - 1));
			nb--;
		}
	}
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	int num_to_factorial = 4;
// 	int factorial_result = ft_iterative_factorial(num_to_factorial);
// 	printf("%d! = %d \n", num_to_factorial, factorial_result);
// 	return (0);
// }