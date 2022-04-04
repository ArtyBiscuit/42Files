#include "libft.h"


int ft_get_value_line(int fd, char buffer)
{
	char *str;
	char res[255];
	int i;

	i = 0;
	while (buffer == ' ' || buffer != ':')
		read(fd, &buffer, 1);	
	if (buffer == ':')
		read(fd, &buffer, 1);
	else
		return (-1);
	while (ft_isspace(buffer))
		read(fd, &buffer, 1);

	while (buffer != '\n')
	{

		res[i] = buffer;
		i++;
		read(fd, &buffer, 1);
	}
	res[i] = '\0';
	ft_putstr(res);
	close(fd);
	return 1;
}

int ft_print_number_dico(char *path, char *nbr)
{
	char buffer;
	int tmp;
	int fd;

	fd = open(path, O_RDONLY);
	while (read(fd, &buffer, 1))
	{
		tmp = 0;
		while (nbr[tmp] == buffer)
		{
			read(fd, &buffer, 1);
			if (tmp == ft_strlen(nbr) - 1)
			{
				return (ft_get_value_line(fd, buffer));
			}
			tmp++;
		}
	}
	close(fd);
	return -1;
}
