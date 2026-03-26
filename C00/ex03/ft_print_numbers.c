/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 12:23:35 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:34:15 by dkevlych         ###   ########.fr       */
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