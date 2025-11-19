/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:15:33 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/19 22:55:34 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char fst, char snd, char trd)
{
	write(1, &fst, 1);
	write(1, &snd, 1);
	write(1, &trd, 1);
	if (!(fst == '7' && snd == '8' && trd == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	fst;
	char	snd;
	char	trd;

	fst = '0';
	while (fst <= '7')
	{
		snd = fst + 1;
		while (snd <= '8')
		{
			trd = snd + 1;
			while (trd <= '9')
			{
				ft_print(fst, snd, trd);
				trd++;
			}
			snd++;
		}
		fst++;
	}
}
