/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:26:01 by mahola            #+#    #+#             */
/*   Updated: 2019/10/16 15:36:12 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*out;

	if (!s || !f)
		return (NULL);
	if (!(out = ft_strnew(ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		out[i] = (*f)(s[i]);
		i++;
	}
	return (out);
}
