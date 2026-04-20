/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 14:36:28 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/17 12:13:33 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 

int ft_atoi(char *str)
{
	int ascii_result;
	int minus_count;
	int i;

	ascii_result = 0;
	while ((str[i] == '-') || (str[i] == '+') || (str[i] == ' ')
			|| (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v')
			|| (str[i] == '\f') || (str[i] == '\r'))
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	if (!((str[i] >= 48) && (str[i] <= 57)))
		return (ascii_result);
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		ascii_result = (ascii_result * 10) + (str[i] - '0');
		i++;
	}
	if ((minus_count % 2) == 1)
		ascii_result = (ascii_result * (-1));
	return (ascii_result);
}

#include <stdio.h>
int main()
{
	char string_atoi[] = "- - - + + + 12345abcd";
	int number_atoi = ft_atoi(string_atoi);

	printf("input taken: '%s'\n", string_atoi);
	printf("number extracted: %d\n", number_atoi);
	return (0);
}
