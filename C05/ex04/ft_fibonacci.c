/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 11:32:55 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 20:00:47 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	else if (index == 1 || index == 2)
	{
		return (1);
	}
	else if (index == 3)
	{
		return (2);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int f_index = 11;
// 	int f_number = ft_fibonacci(f_index);
// 	printf("F_number at the index of %d is equal to %d \n", f_index, f_number);
// }
