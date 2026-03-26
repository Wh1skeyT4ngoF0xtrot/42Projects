/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:00:57 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:51:05 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (((s1[i] != '\0') && (s2[i] != '\0')) && (s1[i] == s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int main()
// {
// 	char test_s1[] = "ABCDEFt";
// 	char test_s2[] = "ABCDEF";
// 	int diff;

// 	diff = test_s1[6] - test_s2[6];
// 	ft_strcmp(test_s1, test_s2);
// 	printf("str1: %s | str2: %s | diff: %d\n", test_s1, test_s2, diff);
// 	return (0);
// }