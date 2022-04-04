/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:15:05 by aforgear          #+#    #+#             */
/*   Updated: 2022/02/02 18:15:42 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../bsq.h"

t_matrice	ft_solve(t_matrice tab)
{
	int	x;
	int	y;
	int	mini;

	y = tab.size_y - 2;
	while (y >= 0)
	{
		x = tab.size_x - 2;
		while (x >= 0)
		{
			if (tab.matrice[y][x] != 0)
			{
				mini = tab.matrice[y][x + 1];
				if (tab.matrice[y + 1][x] < mini)
					mini = tab.matrice[y + 1][x];
				if (tab.matrice[y + 1][x + 1] < mini)
					mini = tab.matrice[y + 1][x + 1];
				tab.matrice[y][x] = mini + 1;
			}
			x--;
		}
		y--;
	}
	return (tab);
}
