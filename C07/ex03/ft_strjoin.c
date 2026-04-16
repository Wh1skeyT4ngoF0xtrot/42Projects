/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:05:44 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/16 21:46:02 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int separator_len(char *str)
{
	int sep_length;

	sep_length = 0;
	while (str[sep_length] != '\0')
	{
		sep_length++;
	}
	return (sep_length);
}

int all_strings_len(int size, char **strs)
{
	int i;
	int ii;
	int strs_length;

	i = 0;
	strs_length = 0;
	while (i < (size - 1))
	{
		ii = 0;
		while (strs[i][ii] != '\0')
		{
			strs_length++;
			ii++;
		}
		i++;
	}
	return (strs_length);
}

char *the_strjoin(int size, char **strs, char *sep, char *new_str, int ult_size)
{
	int x = 0;
	int i = 0;
	int ii = 0;
	int iii = 0;

	while (x < ult_size)
	{
		ii = 0;
		while (strs[i][ii] != '\0')
		{
			new_str[x++] = strs[i][ii++];
		}
		if (i < (size - 1))
		{
			iii = 0;
			while (sep[iii] != '\0')
			{
				new_str[x++] = sep[iii++];
			}
		}
		i++;
	}
	new_str[x] = '\0';
	return (new_str);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *new_str;
	int sep_len;
	int strs_len;
	int ult_size;

	if (size == 0)
	{
		new_str = malloc(1 * sizeof(char));
		new_str[0] = '\0';
		return (new_str);
	}
	sep_len = separator_len(sep);
	strs_len = all_strings_len(size, strs);
	ult_size = (strs_len + (sep_len * (size - 1)) + 1);
	new_str = malloc(ult_size * sizeof(char));
	new_str = the_strjoin(size, strs, sep, new_str, ult_size);
	return (new_str);
}

#include <unistd.h>
int main()
{
	int size = 2;
	char *strings[] = { "Hello", "world" };
	char separator[] = " (^-^) ";
	char *new_string = ft_strjoin(size, strings, separator);
	int i = 0;
	
	while (new_string[i] != '\0')
	{
		write(1, &(new_string[i]), 1);
		i++;
	}
	write(1, "\n", 1);
	free(new_string);
	return (0);
}
