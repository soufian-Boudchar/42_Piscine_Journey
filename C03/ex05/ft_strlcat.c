/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:04:33 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/19 23:10:19 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;
	unsigned int	sum;

	i = 0;
	sum = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);

	if (size > d)

		sum = d + s;
	else

		sum = s + size;

	while (src[i] && size > (d + 1))
	{
		dest[d] = src[i];
		d++;
		i++;
	}

	dest[d] = '\0';
	return (sum);
}