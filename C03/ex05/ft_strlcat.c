/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 10:57:31 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:53:37 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	get_strlen(char *string)
{
	unsigned int	length;

	length = 0;
	while (string[length] != '\0')
	{
		length++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = get_strlen(dest);
	src_len = get_strlen(src);
	i = 0;
	while (src[i] != '\0' && (i < (size - dest_len - 1)))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[size] = '\0';
	size = dest_len + src_len;
	return (size);
}

// #include <stdio.h>
// int main()
// {
// 	char test_src[7] = "Source";
// 	char test_dest[20] = "Destination";
// 	unsigned int size = ft_strlcat(test_dest, test_src, 20);
// 	printf("total length of string we tried to create: %u", size);
// }