/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:50:15 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:51:50 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
	{
		return (0);
	}
	else
	{
		while (i < n && s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
			i++;
		}
		if (i == n)
			return (0);
		else
			return (s1[i] - s2[i]);
	}
}

// #include <stdio.h>
// int main()
// {
// 	char test_s1[] = "ABCDEFt";
// 	char test_s2[] = "ABCDEF";
// 	int diff;
// 	unsigned int first_n_bytes = 50;

// 	diff = ft_strncmp(test_s1, test_s2, first_n_bytes);
// 	printf("Comparing only first %u bytes\n", first_n_bytes);
// 	printf("str1: %s | str2: %s | diff: %d\n", test_s1, test_s2, diff);
// 	return (0);
// }