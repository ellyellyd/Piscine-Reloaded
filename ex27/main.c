/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 22:18:44 by fcatina           #+#    #+#             */
/*   Updated: 2019/04/10 22:52:20 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define ERROR_CODE 1
#define SUCCESS_CODE 0
#define BUF_SIZE 20

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (ERROR_CODE);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (ERROR_CODE);
	}
	else if (argc == 2)
		return ((display_file(argv[1]) == ERROR_CODE) ? \
			(ERROR_CODE) : (SUCCESS_CODE));
}

int		display_file(char *file_name)
{
	int		fd;
	int		res;
	char	buf[BUF_SIZE + 1];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Failed to open file.\n");
		return (ERROR_CODE);
	}
	else
	{
		while ((res = read(fd, buf, BUF_SIZE)))
		{
			buf[res] = '\0';
			ft_putstr(buf);
		}
		if (close(fd) == -1)
		{
			ft_putstr("Failed to close file.\n");
			return (ERROR_CODE);
		}
		else
			return (SUCCESS_CODE);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
