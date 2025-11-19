/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:05:41 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/19 23:19:11 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	array = (int *)malloc(sizeof(int) * ((max - min) + 1));
	if (min >= max)
	{
		array = NULL;
		return (0);
	}
	if (array != NULL)
	{
		while (min < max)
		{
			array[i] = min;
			i++;
			min++;
		}
		*range = array;
		return (i);
	}
	else
		return (-1);
}
