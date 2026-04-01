/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:02:32 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/31 19:06:05 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative_out;
	char	positive_out;

	negative_out = 'N';
	positive_out = 'P';
	if (n < 0)
	{
		write(1, &negative_out, 1);
	}
	else if (n >= 0)
	{
		write(1, &positive_out, 1);
	}
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int num1 = 5;
// 	int num2 = 0;
// 	int num3 = -3;

// 	ft_is_negative(num1);
// 	ft_is_negative(num2);
// 	ft_is_negative(num3);
	
// 	return (0);
// }
