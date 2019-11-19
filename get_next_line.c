/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:46:36 by mahola            #+#    #+#             */
/*   Updated: 2019/11/19 18:06:05 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	parse_line(char **mem, int fd, char **line, int ret)
{
	size_t	len;
	char	*tmp;

	len = 0;
	while (mem[fd][len] && mem[fd][len] != '\n')
		len++;
	if (!(*line = ft_strndup(mem[fd], len)))
		return (-1);
	if (mem[fd][len] == '\n')
	{
		if (!(tmp = ft_strdup(mem[fd] + len + 1)))
			return (-1);
		ft_strdel(&mem[fd]);
		mem[fd] = tmp;
		return (1);
	}
	if (!ft_strlen(mem[fd]) && !ret)
	{
		ft_strdel(&mem[fd]);
		*line = NULL;
		return (0);
	}
	if (!mem[fd][len])
		ft_strdel(&mem[fd]);
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char	*mem[4864];
	char		*tmp;
	char		buf[BUFF_SIZE + 1];
	int			len;

	if (fd < 0 || !line || read(fd, buf, 0) < 0 || fd >= 4864)
		return (-1);
	if (!mem[fd] && !(mem[fd] = ft_strnew(1)))
		return (-1);
	while ((len = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[len] = '\0';
		if (!(tmp = ft_strjoin(mem[fd], buf)))
			return (-1);
		ft_strdel(&mem[fd]);
		mem[fd] = tmp;
		if (ft_strchr(mem[fd], '\n'))
			break ;
	}
	return (parse_line(mem, fd, line, len));
}
