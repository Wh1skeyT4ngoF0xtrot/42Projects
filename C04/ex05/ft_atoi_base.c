/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 14:17:11 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/18 17:43:26 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

///////////////////////// UNFINISHED /////////////////////////////

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

int analyse_base(char *base)
{
	int base_size;
	int i;

	i = 0;
	base_size = get_base_size(base);
	while (base[i] != '\0')
	{
		int ii = 0;
		while (base[ii] != '\0')
		{
			if ((base_size < 2) || (base[i] == '\f') || (base[i] == '\n') 
				|| (base[i] == '\r') || (base[i] == '\t') || (base[i] == '\v')
				|| (base[i] == ' ') || (base[i] == '+') || (base[i] == '-')
				|| (base[i] == base[ii]))
			{
				return (0);
			}
			ii++;
		}
		i++;
	}
	return (base_size);
}

int custom_atoi(char *str, char *base, int base_size)
{
	int ascii_result = 0;
	int minus_count = 0;
	int i = 0;
	int ii = 0;

	while ((str[i] == ' ') || (str[i] == '+') || (str[i] == '-') 
		|| (str[i] == '\t') || (str[i] == '\v') || (str[i] == '\r')
		|| (str[i] == '\n') || (str[i] == '\f'))
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') 
		|| (str[i] >= 'A' && str[i] <= 'F'))
	{
		if (str[i] == base[ii])
		{
			ascii_result = ((ascii_result * base_size) + str[i]);
			ii = 0;
			i++;
		}
		if ((str[i] != base[ii]) && (base[ii] == '\0'))
		{
			return (ascii_result);
		}
		if ((str[i] != base[ii]) && (base[ii] != '\0'))
		{
			ii++;
		}
	}
	if ((minus_count % 2) == 1)
		ascii_result = (ascii_result * (-1));
	return (ascii_result);
}

int ft_atoi_base(char *str, char *base)
{
	int base_size = analyse_base(base);
	// 
}

#include <stdio.h>
int main()
{
	
}