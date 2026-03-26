/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:11:04 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:40:30 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

// int		main(void)
// {
// 	int a;
// 	int b;

// 	a = 42;
// 	b = 24;
// 	ft_swap(&a, &b);
// 	printf("a is %d \nb is %d \n", a, b);
// 	return(0);
// }
