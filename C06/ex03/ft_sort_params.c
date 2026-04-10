/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 14:15:04 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/10 12:07:09 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int arg_compare(char *arg1, char *arg2)
{
	int i = 0;

	while ((arg1[i] != '\0') && (arg2[i] != '\0'))
	{
		if (arg1[i] != arg2[i])
		{
			return (arg1[i] - arg2[i]);
		}
		i++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		char *temp;
		int i;
		int ii;

		i = 1;
		while (i < argc)
		{
			ii = 0;
			while (ii < (argc - 1))
			{
				if (arg_compare(argv[ii], argv[ii + 1]) > 0)
				{
					temp = argv[ii + 1];
					argv[ii + 1] = argv[ii];
					argv[ii] = temp;
				}
				ii++;
			}
			i++;
		}

		i = 1;
		while (i < argc)
		{
			ii = 0;
			while (argv[i][ii] != '\0')
			{
				write(1, &(argv[i][ii]), 1);
				ii++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);	
}