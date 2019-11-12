/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:44:23 by mahola            #+#    #+#             */
/*   Updated: 2019/10/23 00:41:00 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int nbr)
{
	int i;

	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*out;
	int		i;

	if (!n)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	i = ft_length(n);
	if (!(out = ft_strnew(i + 1)))
		return (NULL);
	if (n < 0)
	{
		out[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		out[--i] = n % 10 + '0';
		n = n / 10;
	}
	return (out);
}
