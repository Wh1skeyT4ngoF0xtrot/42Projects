/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 17:45:01 by marvin            #+#    #+#             */
/*   Updated: 2026/03/31 18:26:40 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int i = 0;
	int sqroot;
	
	if (nb < 0)
	{
		return (0);
	}
    while (i < nb)
    {
        if ((i * i) == nb)
        {
			sqroot = i;
			return (sqroot);
        }
		i++;
    }
	return (0);
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int number = 144;
// 	int sqroot = ft_sqrt(number);
	
// 	if (sqroot == 0)
// 	{
// 		printf("Square root of %d is irrational \n", number);
// 	}
// 	else
// 	{
// 		printf("Square root of %d is %d \n", number, sqroot);
// 	}
// 	return (0);
// }
