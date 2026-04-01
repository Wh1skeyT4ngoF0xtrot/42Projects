/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 13:47:04 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/01 12:39:04 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	char *string;

// 	ft_putstr(&string);
// 	//write();
// 	//printf("%c", string);
// 	return(0);
// }