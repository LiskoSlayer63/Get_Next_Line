/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 06:01:43 by mahola            #+#    #+#             */
/*   Updated: 2019/10/22 21:32:08 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	out;

	i = ft_strlen(dst);
	j = 0;
	out = ft_strlen(src);
	if (!dstsize)
		return (out);
	if (dstsize <= i)
		out += dstsize;
	else
		out += i;
	while (src[j] && i + j < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (dstsize > 0 && i < dstsize)
		dst[i + j] = '\0';
	return (out);
}
