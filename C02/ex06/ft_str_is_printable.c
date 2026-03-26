/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:34:35 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:48:08 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main()
// {
// 	char test_str0[] = "WER)($*)@$_"; //1
// 	char test_str1[] = "aDg)!(@(sSD"; //1
// 	char test_str2[] = "XXPDPD";      //1
// 	char test_str3[] = "\0";          //1
// 	char test_str4[] = "&*@#*(&#)";   //1
// 	char test_str5[] = "xa7093y";     //1

// 	int test = ft_str_is_printable(test_str1);

// 	printf("%d", test);
// }