/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:26:01 by mahola            #+#    #+#             */
/*   Updated: 2019/10/22 18:57:03 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*src2;

	if (!n)
		return (0);
	i = 0;
	src1 = (unsigned char*)s1;
	src2 = (unsigned char*)s2;
	while (i < n - 1 && (src1[i] == src2[i]))
		i++;
	return (src1[i] - src2[i]);
}
