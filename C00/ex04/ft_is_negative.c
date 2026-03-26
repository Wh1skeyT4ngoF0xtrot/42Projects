/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:02:32 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:35:37 by dkevlych         ###   ########.fr       */
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