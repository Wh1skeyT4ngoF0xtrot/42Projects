/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 14:17:11 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/23 21:41:33 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int get_base_size(char *base)
{
	int base_size = 0;
	int i = 0;

	while (base[base_size] != '\0')
	{
		base_size++;
	}
	return (base_size);
}

int check_if_has_no_duplicates(char *base, int base_size)
{
	int i;
	int ii;

	i = 0;
	while (base[i] != '\0')
	{
		ii = (i + 1);
		while (ii < base_size)
		{
			if (base[i] == base[ii])
			{
				return (0);
			}
			ii++;
		}
		i++;
	}
	return (1);
}

int check_if_base_is_valid(char *base)
{
	int base_size;
	int i;

	i = 0;
	base_size = get_base_size(base);
	while (base[i] != '\0')
	{
		if ((base_size < 2) || (base[i] == '+') || (base[i] == '-')
			|| (base[i] == '\t') || (base[i] == '\n') || (base[i] == '\v')
			|| (base[i] == '\f') || (base[i] == '\r') || (base[i] == ' '))
		{
			return (0);
		}
		i++;
	}
	if (check_if_has_no_duplicates(base, base_size) == 1)
	{
		return (1);
	}
	return (0);
}

int if_in_base_find_index(char c, char *base)
{
	int base_index;
	
	base_index = 0;
	while (base[base_index] != '\0')
	{
		if (c == base[base_index])
		{
			return (base_index);
		}
		base_index++;
	}
	return (-1);
}

int ft_atoi_base(char *str, char *base)
{
	int base_size;
	int base_index;
	int minus_count;
	int result;
	int i;
	
	i = 0;
	result = 0;
	minus_count = 0;
	if (check_if_base_is_valid(base) != 1)
	{
		return (0);
	}
	base_size = get_base_size(base);
	while ((str[i] != '+') && (str[i] != '-'))
	{
		if (!((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r')))
		{
			return (0);
		}
		i++;
	}
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
		{
			minus_count++;
		}
		i++;
	}
	while (str[i] != '\0')
	{
		base_index = if_in_base_find_index(str[i], base);
		if (base_index != (-1))
		{
			result = ((result * base_size) + base_index);
		}
		else
		{
			break ;
		}
		i++;
	}
	if ((minus_count % 2) == 1)
	{
		result = (result * (-1));
	}
	return (result);
}

#include <stdio.h>
int main()
{
	char str_hex[] = "   ---+++50C_G-unit";
	char str_bin[] = "  ---+++110101010101010101";
	
	char base_hex[] = "0123456789ABCDEF";
	char base_bin[] = "01";
	
	int converted_from_hex = ft_atoi_base(str_hex, base_hex);
	int converted_from_bin = ft_atoi_base(str_bin, base_bin);

	char str_invalid[] = "This is an invalid string to convert";
	char base_invalid[] = "This is an invalid base";
	int converted_from_invalid = ft_atoi_base(str_invalid, base_invalid);
	
	printf("Input received: '%s' in base (%s)\n", str_hex, base_hex);
	printf("Output (converted): %d into base decimal (0123456789)\n", converted_from_hex);
	printf("\n");
	printf("Input received: '%s' in base (%s)\n", str_bin, base_bin);
	printf("Output (converted): %d into base decimal (0123456789)\n", converted_from_bin);
	printf("\n");

	if (converted_from_invalid == 0)
	{
		printf("String: '%s'\n", str_invalid);
		printf("Base: '%s'\n", base_invalid);
		printf("Either string or base provided is invalid\n");
	}
	return (0);
}