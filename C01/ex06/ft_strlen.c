/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:56:47 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/01 12:44:07 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		strlen;

	strlen = 0;
	while (str[strlen] != '\0')
	{
		strlen++;
	}
	return (strlen);
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	char string[] = "This is a test string";

// 	int str_lenght = ft_strlen(string);
// 	printf("string '%s' is %d characters long\n", string, str_lenght);

// 	return (0);
// }
