/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:42:37 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:49:30 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 97 && str[i] <= 122))
			str[i] = (str[i] - 32);
		else
		{
			if (!((str[i - 1] >= 48 && str[i - 1] <= 57)
					|| (str[i - 1] >= 65 && str[i - 1] <= 90)
					|| (str[i - 1] >= 97 && str[i - 1] <= 122)))
			{
				if (str[i] >= 97 && str[i] <= 122)
					str[i] = (str[i] - 32);
			}
			else if (str[i] >= 65 && str[i] <= 90)
				str[i] = (str[i] + 32);
		}
		i++;
	}
	return (str);
}

// int main()
// {
// 	char test_str[] = "hi, how are you? 42words forty-two; fifty+and+one";
// 	char *test_output = ft_strcapitalize(test_str2);
// 	printf("%s", test_output);
// }