/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:06:34 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/16 11:25:12 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *range;
	int size_to_alloc;
	int i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	size_to_alloc = (max - min);
	range = malloc((size_to_alloc) * sizeof(int));
	while (i < (size_to_alloc))
	{
		range[i] = (min + i);
		i++;
	}
	return (range);
}

#include <stdio.h>
#include <unistd.h>
int main()
{
	int min = -10;
	int max = 10;
	int x = 0;
	int size = (max - min);
	int *range = ft_range(min, max);

	printf("the range from %d to %d is following: ", min, max);
	
	while (x < size)
	{
		printf("%d, ", range[x]);
		x++;
	}
	printf("\n");

	free(range);
	return (0);
}