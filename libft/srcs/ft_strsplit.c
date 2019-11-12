/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:44:01 by mahola            #+#    #+#             */
/*   Updated: 2019/10/22 23:18:16 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_word_count(char const *s, char c)
{
	int		count;
	int		found;
	size_t	i;

	i = 0;
	count = 0;
	found = 0;
	while (s[i])
	{
		if (s[i] != c && !found)
		{
			count++;
			found = 1;
		}
		else if (s[i] == c)
			found = 0;
		i++;
	}
	return (count);
}

static int	ft_word_len(char const *s, char c, size_t i)
{
	int	len;

	len = 0;
	while (s[i + len] && s[i + len] != c)
		len++;
	return (len);
}

static int	ft_get_next(char const *s, char c, size_t i)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**out;
	int		words;
	int		i;
	size_t	j;

	words = ft_word_count(s, c);
	if (!(out = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < words)
	{
		j = ft_get_next(s, c, j);
		if (!(out[i] = ft_strsub(s, j, ft_word_len(s, c, j))))
			out[i] = NULL;
		j += ft_word_len(s, c, j);
		i++;
	}
	out[i] = NULL;
	return (out);
}
