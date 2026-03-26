/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 10:19:17 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:41:30 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

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