/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 10:58:04 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/01 12:38:32 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		result;
	int		remainder;

	result = *a / *b;
	remainder = *a % *b;
	*a = result;
	*b = remainder;
}

// #include <stdio.h>
// int		main(void)
// {
// 	int result;
// 	int remainder;

// 	int *a = &result;
// 	int *b = &remainder;

// 	ft_ultimate_div_mod(a, b);
// 	printf("a: %d, b: %d \n", &a, &b);
// 	printf("result: %d, remainder: %d \n", result, remainder);
// 	return(0);
// }