/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 12:04:22 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/16 11:26:10 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *str)
{
	int i;
	int str_len;
	char *dupe_str;

	i = 0;
	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	dupe_str = malloc((str_len + 1) * sizeof(char));
	if (dupe_str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		dupe_str[i] = str[i];
		i++;
	}
	dupe_str[i] = '\0';
	return (dupe_str);
}

#include <unistd.h>
int main()
{
	char string_to_dupe[] = "Hello everyone!";
	char *string_ptr = string_to_dupe;
	char *duplicate_str_ptr = ft_strdup(string_ptr);
	int x;
	while (duplicate_str_ptr[x] != '\0')
	{
		write(1, &(duplicate_str_ptr[x]), 1);
		x++;
	}
	write(1, "\n", 1);

	free(duplicate_str_ptr);
	return (0);
}