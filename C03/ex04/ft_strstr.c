/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 15:49:20 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/02 14:12:55 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;
	int	temp_i;

	i = 0;
	n = 0;
	if (!to_find[0])
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[n])
		{
			temp_i = i;
			while (str[temp_i] == to_find[n] && str[temp_i] && to_find[n])
			{
				temp_i++;
				n++;
			}
			if (to_find[n] == '\0')
				return (&(str[i]));
			n = 0;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	char haystack[] = "Hello bla vla dla world";
// 	char needle[] = "bla";

// 	char *start_of_needle = ft_strstr(haystack, needle);

// 	printf("string found, first char of it: %d \n", *start_of_needle);
// 	return (0);
// }
