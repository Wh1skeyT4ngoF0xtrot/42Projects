/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:48:38 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:48:50 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = (str[i] - 32);
		}
		i++;
	}
	return (str);
}

// int main()
// {
// 	char test_str1[] = "asdadas dadd";
// 	char test_str2[] = "2234 sd GGKGGJG dfdf";
// 	char test_str3[] = "Hellooo wooorld";

// 	char *test_output = ft_strupcase(test_str2);

// 	printf("%s", test_output);
// }