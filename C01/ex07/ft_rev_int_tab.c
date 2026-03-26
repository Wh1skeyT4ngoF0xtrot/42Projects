/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:51:18 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:43:36 by dkevlych         ###   ########.fr       */
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
