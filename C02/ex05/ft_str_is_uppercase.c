/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:01:59 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:47:41 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main()
// {
// 	char test_str0[] = "WER";       //1
// 	char test_str1[] = "aDSDSD";    //1
// 	char test_str2[] = "XXPDPD";    //0
// 	char test_str3[] = "\0";        //1
// 	char test_str4[] = "&*@#*(&#)"; //0
// 	char test_str5[] = "xa7093y";   //0

// 	int test = ft_str_is_uppercase(test_str1);

// 	printf("%d", test);
// }