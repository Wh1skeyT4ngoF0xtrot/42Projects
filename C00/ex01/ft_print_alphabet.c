/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 20:27:21 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:33:08 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	char	alphabet[26];

	i = 0;
	while (i <= 26)
	{
		alphabet[i] = 97 + i;
		i++;
	}
	write(1, &alphabet, 26);
}
