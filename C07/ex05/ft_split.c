/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 21:48:46 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/30 14:15:48 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_separator(char c, char *charset)
{
	int i;
	
	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int count_words(char *str, char *charset)
{
	int i;
	int word_count;
	
	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		if ((is_separator(str[i], charset) != 1) && (str[i] != '\0'))
		{
			word_count++;
			while ((is_separator(str[i], charset) != 1) && (str[i] != '\0'))
			{
				i++;
			}
		}
		i++;
	}
	return (word_count);
}

void ft_strncpy(char *src, char *dest, int n)
{
	int i;
	
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int get_word_len(char *str, char *charset)
{
	int word_len;

	word_len = 0;
	while (!(is_separator(*str, charset) == 1))
	{
		str++;
		word_len++;
	}
	return (word_len);
}

char **ft_split(char *str, char *charset)
{
	char **new_str_array;
	int word_count;
	int word_len;
	int i;
	int x;

	x = 0;
	i = 0;
	word_count = count_words(str, charset);
	new_str_array = (char **)malloc((word_count + 1) * sizeof(char *));
	new_str_array[word_count] = NULL;
	while ((word_count > 0) && (str[i] != '\0'))
	{
		while (is_separator(str[i], charset) == 1)
		{
			i++;
		}
		word_len = get_word_len(&str[i], charset);
		new_str_array[x] = malloc((word_len + 1) * sizeof(char));
		ft_strncpy(&str[i], new_str_array[x], word_len);
		x++;
		i = (i + word_len);
		word_count--;
	}
	return (new_str_array);
}

#include <stdio.h>
#include <unistd.h>
int main()
{
	char string[] = "hello BRUH this BRUH is BRUH your BRUH captain BRUH speaking ";
	char charset[] = " BRUH ";
	char **new_split_array;
	int i = 0;

	new_split_array = ft_split(string, charset);
	while (new_split_array[i] != NULL)
	{
		printf("%s\n", new_split_array[i]);
		i++;
	}
	free(new_split_array);
	return (0);
}
