/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:12:21 by mahola            #+#    #+#             */
/*   Updated: 2019/10/22 23:16:19 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t len;
	size_t pre;
	size_t pos;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	pre = 0;
	pos = 0;
	while (s[pre] && ft_isspace(s[pre]))
		pre++;
	while (s[len - pos - 1] && ft_isspace(s[len - pos - 1]))
		pos++;
	if (pre + pos >= len)
		return (ft_strnew(1));
	return (ft_strsub(s, pre, len - (pre + pos)));
}
