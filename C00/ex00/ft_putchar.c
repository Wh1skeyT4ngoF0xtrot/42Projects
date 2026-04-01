/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 20:25:16 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/01 11:11:22 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int main(int argc, char *argv[])
// {
// 	char letter_B = 'B';

// 	ft_putchar(letter_B);
// 	ft_putchar('\n');
	
// 	return (0);
// }
