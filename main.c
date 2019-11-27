/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:16:46 by mahola            #+#    #+#             */
/*   Updated: 2019/11/27 19:23:19 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

static int	opensesame(char *name)
{
	return (open(name, O_RDONLY));
}

static void	read_all(int fd)
{
	char	*output;
	int		rtn;

	output = NULL;
	while ((rtn = get_next_line(fd, &output)) > 0)
	{
		printf("%s\n", output);
		free(output);
	}
}

int			main(int argc, char **argv)
{
	int fd;

	if (argc == 1)
		read_all(0);
	if (argc == 2)
	{
		fd = opensesame(argv[1]);
		read_all(fd);
		close(fd);
	}
	return (0);
}
