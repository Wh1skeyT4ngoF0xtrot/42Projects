/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:41:42 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:44:07 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		temporary;
	int		i;
	int		n;

	i = 0;
	while (i < size)
	{
		n = 0;
		while (n < (size - 1))
		{
			if (tab[n] > tab[n + 1])
			{
				temporary = tab[n];
				tab[n] = tab[n + 1];
				tab[n + 1] = temporary;
			}
			n++;
		}
		i++;
	}
}

// int main(void)
// {
// 	int my_array[] = {2, -3, -6, 9, 35, -16, 29, 0};

// 	ft_sort_int_tab(my_array, 8);

// 	int x = 0;
// 	while (x < 8)
// 	{
// 		printf("%d", my_array[x]);
// 		printf(" ");
// 		x++;
// 	}
// 	return (0);
// }
