/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:36:20 by mahola            #+#    #+#             */
/*   Updated: 2019/10/16 15:39:24 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		out[i] = (*f)((unsigned int)i, s[i]);
		i++;
	}
	return (out);
}
