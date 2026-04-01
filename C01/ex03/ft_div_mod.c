/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 10:19:17 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/01 12:38:05 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int main(void)
// {
// 	int a;
// 	int b;
// 	int result;
// 	int remainder;

// 	a = 42;
// 	b = 17;

// 	ft_div_mod(a, b, &result, &remainder);

// 	printf("%d / %d = %d ; remainder = %d \n", a, b, result, remainder);
// 	return(0);
// }