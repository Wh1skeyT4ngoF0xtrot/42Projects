/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:46:17 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:45:44 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0' && i < n)
	{
		dest[i++] = src[j++];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}

// int main()
// {
// 	char *src_str1 = "hello its me";
// 	char dest_str2[20] = {'H', 'E', 'L'};
// 	ft_strncpy(dest_str2, src_str1, 1);
// 	return (0);
// }