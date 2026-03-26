/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:35:36 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:54:25 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

// #include <stdio.h>
// int main()
// {
// 	char test_string[] = "This is a test string, sheeeesh!";
// 	int str_len = ft_strlen(test_string);
// 	printf("Length of provided string: %d", str_len);
//  return (0);
// }