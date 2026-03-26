/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 15:49:20 by dkevlych          #+#    #+#             */
/*   Updated: 2026/03/26 19:53:09 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;
	int	temp_i;

	i = 0;
	n = 0;
	if (!to_find[0])
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[n])
		{
			temp_i = i;
			while (str[temp_i] == to_find[n] && str[temp_i] && to_find[n])
			{
				temp_i++;
				n++;
			}
			if (to_find[n] == '\0')
				return (&(str[i]));
			n = 0;
		}
		i++;
	}
	return (0);
}
