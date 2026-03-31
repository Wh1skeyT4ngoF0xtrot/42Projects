/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 20:00:29 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/31 18:26:21 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i = 0;
	int prev_i = (i - 1);

	while (i < nb)
	{
		if ((i * i) == nb)
		{
			return (i);
		}
		if (((i * i) > nb) && ((prev_i * prev_i) < nb))
		{
			return (prev_i);
		}
		i++;
		prev_i++;
	}
}

int ft_is_prime(int nb)
{
	int i = 2;
	int sqrt_of_nb = ft_sqrt(nb);
	
	if (nb == 2)
	{
		return (1);
	}
	while (i <= sqrt_of_nb)
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	int next_prime = nb;
	
	while (1)
	{
		if (ft_is_prime(next_prime) == 1)
		{
			return (next_prime);
			break ;
		}
		next_prime++;
	}
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int number = 62;
// 	int next_prime = ft_find_next_prime(number);
	
// 	if (ft_is_prime(number) == 1)
// 	{
// 		printf("%d is already a prime number \n", number);
// 	}
// 	else if (ft_is_prime(number) == 0)
// 	{
// 		printf("%d is NOT prime \n", number);
// 		printf("The next prime after %d is %d \n", number, next_prime);
// 	}
// 	else
// 	{
// 		printf("An unknown error occured \n");
// 	}
// 	return (0);
// }
