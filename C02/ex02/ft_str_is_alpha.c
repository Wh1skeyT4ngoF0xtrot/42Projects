/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:57:41 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:46:08 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] <= 90)
				|| (str[i] >= 97 && str[i] <= 122)))
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
// 	char test_str2[0];
// 	char test_str3[8] = {'9', 'H', 'E', 'L', 'H', 'E', 'L', '4'};

// 	int test = ft_str_is_alpha(test_str2);

// 	printf("%d", test);	
// 	return (0);
// }