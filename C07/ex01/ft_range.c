/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:54:32 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/13 10:05:15 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	// The array pointer receives the memory allocated to the size of the range between Max and Min
	array = (int *)malloc(sizeof(int) * ((max - min) + 1));
	// If min is greater than max, array gets null and the returns is 0
	if (min >= max)
	{
		array = NULL;
		return (0);
	}
	// While the min is smaller than max, array receives the min
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	// The return is the array
	return (array);
}
/*
int	main(void)
{
	int	min = -10;
	int	max = 10;
	int	i = 0;
	int	*range = ft_range(min, max);
	int	size = max - min;

	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	// In the end the allocated memory needs to be free
	// When we free 'range', we ended up releasing 'array', as it's a pointer
	free(range);
} */