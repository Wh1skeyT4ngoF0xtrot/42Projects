/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 18:15:10 by marvin            #+#    #+#             */
/*   Updated: 2026/03/28 18:15:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prime numbers are those that can only be devided by 1 and by itself
// like 2, 3, 5, 7.

int ft_is_prime(int nb)
{
    if (nb == 2)
    {
        return (1);
    }
    if (((nb % 2) == 0) || (nb == 1)) // if even or just 1
    {
        return (0);
    }
    if (((nb % 2) == 1)) // if odd
    {
        if ((((nb / 2) * 2) == nb) 
            || (((nb / 3) * 3) == nb) 
            || (((nb / 5) * 5) == nb) 
            || (((nb / 7) * 7) == nb))
        {
            return (1);
        }
    }
}