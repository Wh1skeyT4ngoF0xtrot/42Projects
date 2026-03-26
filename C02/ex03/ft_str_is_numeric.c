/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:59:08 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:46:27 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
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
// 	char test_str3[6] = {'9', 'H', 'E', 'H', 'E', '4'};
// 	int test_str4[3] = {5, 6, 7}; 					

// 	int test = ft_str_is_numeric(test_str4);

// 	printf("%d", test);	
// 	return (0);
// }