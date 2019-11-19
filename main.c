/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:24:49 by mahola            #+#    #+#             */
/*   Updated: 2019/11/19 18:02:10 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc > 1)
	{
		if ((fd = open(argv[1], O_RDONLY)) >= 0)
		{
			while (get_next_line(fd, &line) > 0)
				printf("%s\n", line);
			close(fd);
		}
		else
			printf("Error opening file");
	}
	return (0);
}
