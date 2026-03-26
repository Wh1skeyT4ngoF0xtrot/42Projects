/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 13:29:05 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:49:54 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[n] != '\0')
	{
		n++;
	}
	size = (n);
	return (size);
}

// int main(size)
// {
// 	char test_src[] = "This is a test string";
// 	char test_dest[22];
// 	ft_strlcpy(test_dest, test_src, 22);
// 	printf("String: \"%s\" -- is ? bytes long \n", test_src);
// 	return (0);
// }