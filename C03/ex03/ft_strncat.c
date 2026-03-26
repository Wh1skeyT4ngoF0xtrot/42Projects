/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 13:50:38 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:52:40 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	i = 0;
	while (i != nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char test_src[20] = "Hellooo";
// 	char test_dest[20] = "Wooorld";

// 	ft_strncat(test_dest, test_src, 5);
// 	printf("%s", test_dest);

// 	return (0);
// }