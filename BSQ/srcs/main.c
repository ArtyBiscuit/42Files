/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:59:49 by johrober          #+#    #+#             */
/*   Updated: 2022/02/02 19:06:52 by johrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

void	basic_print(t_matrice *tab);

int	map_error(void)
{
	write(1, "Map error\n", 10);
	return (1);
}

int	process_with_no_args(void)
{
	char		*txt_map;
	t_matrice	*tab;

	txt_map = ft_read_input();
	if (txt_map == NULL)
		return (map_error());
	tab = ft_parse_data(txt_map);
	if (tab == NULL)
	{
		free(txt_map);
		return (map_error());
	}
	ft_solve(*tab);
	ft_print_mtx(*tab);
	free(txt_map);
	ft_free_matrice(tab);
	return (0);
}

int	process_with_args(int argc, char **argv)
{
	char		*txt_map;
	t_matrice	*tab;
	int			count;

	count = 1;
	while (count < argc)
	{
		txt_map = ft_read_file(argv[count++]);
		if (txt_map == NULL)
		{
			return (map_error());
		}
		tab = ft_parse_data(txt_map);
		if (tab == NULL)
		{
			free(txt_map);
			return (map_error());
		}
		ft_solve(*tab);
		ft_print_mtx(*tab);
		free(txt_map);
		ft_free_matrice(tab);
		write(1, "\n", 1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		process_with_no_args();
	}
	else
	{
		process_with_args(argc, argv);
	}
}
