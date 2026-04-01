/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:51:18 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/01 13:46:15 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		temporary;
	int		i;

	i = 0;
	while (i < (size / 2))
	{
		temporary = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temporary;
		i++;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	int number_tab[] = {11, 12, 13, 14, 60, 91, 92, 93, 94};
	
// 	ft_rev_int_tab(number_tab, 9);
	
// 	int i = 0;
// 	while (i < 9)
// 	{
// 		printf("%d ", number_tab[i]);
// 		i++;
// 	}
// 	printf("\n");
	
// 	return (0);
// }
