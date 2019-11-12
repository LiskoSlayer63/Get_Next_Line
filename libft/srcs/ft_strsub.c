/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:51:23 by mahola            #+#    #+#             */
/*   Updated: 2019/10/16 17:10:23 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*out;

	if (!(out = ft_strnew(len + 1)))
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		out[i] = s[start + i];
		i++;
	}
	return (out);
}
