/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:23:21 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/22 12:49:34 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int get_base_length(char *base)
{
	int base_length;
	int i;

	i = 0;
	base_length = 0;
	while (base[base_length] != '\0')
	{
		base_length++;
	}
	return (base_length);
}

int check_if_base_has_no_duplicates(char *base, int base_length)
{
	int i;
	int ii;
	
	i = 0;
	while (base[i] != '\0')
	{
		ii = (i + 1);
		while (ii < base_length)
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
	int base_length;
	int i;

	i = 0;
	base_length = get_base_length(base);
	while (base[i] != '\0')
	{
		if ((base_length < 2) || (base[i] == '+') || (base[i] == '-')
			|| (base[i] == ' ') || (base[i] == '\t') || (base[i] == '\n')
			|| (base[i] == '\v') || (base[i] == '\f') || (base[i] == '\r'))
		{
			return (0);
		}
		i++;
	}
	if (check_if_base_has_no_duplicates(base, base_length) == 1)
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

int get_result_length(int result, char *base_to)
{
	int result_length;
	int base_length;
	long long_result;
	
	long_result = (long)(result);
	result_length = 0;
	base_length = get_base_length(base_to);
	if (long_result == 0)
	{
		return (1);
	}
	if (long_result < 0)
	{
		result_length = (result_length + 1);
		long_result = (long_result * (-1));
	}
	while (long_result > 0)
	{
		long_result = (long_result / base_length);
		result_length++;
	}
	return (result_length);
}
