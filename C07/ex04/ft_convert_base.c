/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 13:13:12 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/22 13:24:51 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int get_base_length(char *base);
int check_if_base_has_no_duplicates(char *base, int base_length);
int check_if_base_is_valid(char *base);
int if_in_base_find_index(char c, char *base);
int get_result_length(int result, char *base_to);

int ft_atoi_base_from(char *nbr, char *base_from)
{
	int base_length;
	int minus_count;
	int base_index;
	int result;
	int i;
	
	i = 0;
	result = 0;
	minus_count = 0;
	base_length = get_base_length(base_from);
	while ((nbr[i] == ' ') || (nbr[i] == '\t') || (nbr[i] == '\n') 
		|| (nbr[i] == '\v') || (nbr[i] == '\f') || (nbr[i] == '\r'))
	{
		i++;
	}
	while ((nbr[i] == '-') || (nbr[i] == '+'))
	{
		if ((nbr[i] == '-'))
			minus_count++;
		i++;
	}
	while (nbr[i] != '\0')
	{
		base_index = if_in_base_find_index(nbr[i], base_from);
		if (base_index != (-1))
			result = ((result * base_length) + base_index);
		else
			break ;
		i++;
	}
	if ((minus_count % 2) == 1)
		result = (result * (-1));
	return (result);
}

char *ft_itoa_base_to(int number, char *base_to, char *converted_to_base)
{
	long long_number;
	int base_length;
	int result_length;
	int i;

	long_number = (long)number;
	base_length = get_base_length(base_to);
	result_length = get_result_length(number, base_to);
	i = (result_length - 1);
	converted_to_base[result_length] = '\0';
	if (long_number == 0)
	{
		converted_to_base[0] = base_to[0];
		return (converted_to_base);
	}
	if (long_number < 0)
	{
		converted_to_base[0] = '-';
		long_number = (long_number * (-1));
	}
	while (long_number > 0)
	{
		converted_to_base[i] = base_to[long_number % base_length];
		long_number = (long_number / base_length);
		i--;
	}
	return (converted_to_base);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char *converted_to_base;
	int nbr_extracted;
	int to_base_length;
	
	if ((check_if_base_is_valid(base_from) == 1) && (check_if_base_is_valid(base_to) == 1))
	{
		nbr_extracted = ft_atoi_base_from(nbr, base_from);
		to_base_length = get_result_length(nbr_extracted, base_to);
		converted_to_base = malloc(to_base_length * sizeof(char) + 1);
		if (!converted_to_base)
		{
			return (NULL);
		}
		converted_to_base = ft_itoa_base_to(nbr_extracted, base_to, converted_to_base);
		return (converted_to_base);
	}
	else
	{
		return (NULL);
	}
}

#include <stdio.h>
int main()
{
	char number[] = "   +-+-+-BAD67AF";
	char base_from[] = "0123456789ABCDEF";
	char base_to[] = "01";
	char *converted_number = ft_convert_base(number, base_from, base_to);

	printf("Input received: '%s' in base(%s)\n", number, base_from);
	printf("Output converted: '%s' in base(%s)\n", converted_number, base_to);

	free(converted_number);
	return (0);
}
