/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 12:13:43 by bsatou            #+#    #+#             */
/*   Updated: 2019/07/17 15:10:49 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "../includes/header.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	c;

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return (0);
		while (read(fd, &c, 1))
			write(1, &c, 1);
		close(fd);
	}
	else
		write(2, "Too many arguments.\n", 20);
	return (0);
}
