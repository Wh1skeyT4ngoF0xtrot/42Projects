/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:21:45 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:49:12 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = (str[i] + 32);
		}
		i++;
	}
	return (str);
}

// int main()
// {
// 	char test_str1[] = "HELOOOO Pick up the phone";
// 	char test_str2[] = "stop IGNORING ME huh??";
// 	char test_str3[] = "(-_-) UGH";

// 	char *test_output = ft_strlowcase(test_str3);

// 	printf("%s", test_output);
// }