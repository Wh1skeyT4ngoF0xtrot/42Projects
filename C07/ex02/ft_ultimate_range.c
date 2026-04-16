/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkevlych <dkevlych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:29:17 by dkevlych          #+#    #+#             */
/*   Updated: 2026/04/15 14:12:19 by dkevlych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	size = (max - min);
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		(*range)[i] = (min + i);
		i++;
	}
	return (size);
}

#include <stdio.h>
int main()
{
	int x = 0;
	int min = 0;
	int max = 14;
	int *range_ptr1;
	int **range_ptr2 = &range_ptr1;
	int size = ft_ultimate_range(range_ptr2, min, max);
	
	printf("Size of range from %d to %d is %d", min, max, size);
	printf("\nRange array: ");
	while (x < size)
	{
		printf("%d ", range_ptr1[x]);
		x++;
	}
	printf("\n");

	free(range_ptr1);

	return (0);
}
