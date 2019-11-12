/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 07:02:04 by mahola            #+#    #+#             */
/*   Updated: 2019/10/16 16:29:38 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*out;

	i = 0;
	out = NULL;
	while (s[i])
	{
		if (s[i] == c)
			out = (char*)&s[i];
		i++;
	}
	if (s[i] == c)
		return ((char*)&s[i]);
	return (out);
}
