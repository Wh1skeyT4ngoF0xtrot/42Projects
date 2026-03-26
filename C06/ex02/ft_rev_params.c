/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:46:38 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 20:02:48 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	ii;

	if (argc >= 1)
	{
		i = argc - 1;
		while (i > 0)
		{
			ii = 0;
			while (argv[i][ii] != '\0')
			{
				write(1, &argv[i][ii], 1);
				ii++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
}
