/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:24:33 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:47:01 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int		main()
// {
// 	char test_str1[3] = {'H', 'E', 'L'};
// 	char test_str2[1] = {'\0'};
// 	char test_str3[6] = {'9', 'H', 'E', 'H', 'E', '4'};
// 	char test_str4[6] = {'i', 'j', 'g', 'd', 'f', 's'};

// 	int test = ft_str_is_lowercase(test_str2);

// 	printf("%d", test);	
// 	return (0);
// }