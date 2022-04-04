/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:04:27 by johrober          #+#    #+#             */
/*   Updated: 2022/02/02 17:19:35 by johrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

char	*ft_read_file(char *map)
{
	int		fd;
	int		reading;
	char	*str;
	int		size;
	char	buffer[16];

	size = 16;
	fd = open(map, O_RDONLY);
	if (fd == -1)
		return (NULL);
	reading = read(fd, buffer, size);
	str = ft_strdup(buffer);
	str[reading] = 0;
	while (reading == size)
	{
		reading = read(fd, buffer, size);
		str = ft_strcat_realloc(str, buffer, reading);
		if (str == NULL)
			return (NULL);
	}
	close(fd);
	return (str);
}

char	*ft_read_input(void)
{
	char	buffer[16];
	int		nb_line;
	char	char_read;
	char	*str;
	int		buf_count;

	str = malloc(sizeof(char));
	str[0] = 0;
	buf_count = 0;
	nb_line = ft_get_nb_line(buffer, &buf_count) + 1;
	while (nb_line > 0 && read(0, &char_read, 1))
	{
		if (buf_count == 16)
		{
			buf_count = 0;
			str = ft_strcat_realloc(str, buffer, 16);
		}
		buffer[buf_count] = char_read;
		buf_count++;
		if (char_read == '\n')
			nb_line--;
	}
	str = ft_strcat_realloc(str, buffer, buf_count);
	return (str);
}

int	ft_get_nb_line(char *buffer, int *buf_count)
{
	int		nb_line;
	char	char_read;

	nb_line = 0;
	while (read(0, &char_read, 1) && char_read >= '0' && char_read <= '9')
	{
		buffer[*buf_count] = char_read;
		nb_line *= 10;
		nb_line += char_read - '0';
		(*buf_count)++;
	}
	buffer[*buf_count] = char_read;
	(*buf_count)++;
	return (nb_line);
}
