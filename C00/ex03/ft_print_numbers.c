/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 12:23:35 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/01 11:21:52 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	num_row[10];

	i = 0;
	while (i < 10)
	{
		num_row[i] = 48 + i;
		i++;
	}
	write(1, &num_row, 10);
}

// int main(int argc, char *argv[])
// {
// 	ft_print_numbers();
// 	write(1, '\n', 1);
// 	return (0);
// }
