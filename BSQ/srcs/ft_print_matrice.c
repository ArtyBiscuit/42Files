/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrice.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:34:53 by aforgear          #+#    #+#             */
/*   Updated: 2022/02/02 18:45:13 by johrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../bsq.h"

int	ft_r_max(t_matrice tab)
{
	int	max;
	int	x;
	int	y;

	max = 0;
	y = 0;
	while (y < tab.size_y)
	{
		x = 0;
		while (x < tab.size_x)
		{
			if (tab.matrice[y][x] > max)
			{
				max = tab.matrice[y][x];
			}
			x++;
		}
		y++;
	}
	return (max);
}

void	ft_norm_print_mtx(t_matrice tab, int x, int y, t_cube *cube)
{
	if (cube->air != -1
		&& x >= cube->x && x < cube->x + cube->air
		&& y >= cube->y && y < cube->y + cube->air)
		write(1, &tab.full, 1);
	else if (tab.matrice[y][x] == ft_r_max(tab) && cube->air == -1)
	{
		write(1, &tab.full, 1);
		cube->x = x;
		cube->y = y;
		cube->air = tab.matrice[y][x];
	}
	else if (tab.matrice[y][x] != 0)
		write(1, &tab.empty, 1);
	else if (tab.matrice[y][x] == 0)
		write(1, &tab.obstacle, 1);
}

void	ft_print_mtx(t_matrice tab)
{
	int		x;
	int		y;
	t_cube	cube;

	y = 0;
	cube.air = -1;
	while (y < tab.size_y)
	{
		x = 0;
		while (x < tab.size_x)
		{
			ft_norm_print_mtx(tab, x, y, &cube);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}
