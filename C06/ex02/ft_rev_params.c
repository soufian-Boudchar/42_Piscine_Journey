/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:45:02 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/19 23:18:15 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int l;

	i = 1;
	l = argc - 1;
	while (i < argc)
	{
		j = 0;

		while (argv[l][j])
		{
			ft_putchar(argv[l][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
		l--;
	}
}