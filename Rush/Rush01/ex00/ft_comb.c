/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 05:38:13 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/23 20:17:17 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	ft_write_comb(int *comb, int line_index, int **matrix);
void	ft_get_comb(int index1, int index2, int **tab);
void	help(int *i, int ***possibility, int **current_tab, int **matrix);

void	ft_check_comb(int ***possibility, int **matrix)
{
	int	i[5];
	int	**current_tab;

	current_tab = malloc(sizeof(void *) * 7);
	i[0] = 0;
	while (i[0] < 7)
		current_tab[i[0]++] = malloc(sizeof(int) * 4);
	i[0] = 1;
	while (i[0] < 5)
	{
		help(i, possibility, current_tab, matrix);
	}
	i[0] = 0;
	while (i[0] < 7)
		free(current_tab[i[0]++]);
	free(current_tab);
}

void	help(int *i, int ***possibility, int **current_tab, int **matrix)
{
	ft_get_comb(matrix[i[0]][0], matrix[i[0]][5], current_tab);
	i[1] = 0;
	i[3] = 0;
	while (current_tab[i[1]][0] != 9)
	{
		i[2] = 0;
		while (i[2] < 4)
		{
			if (possibility[i[0] - 1][i[2]][current_tab[i[1]][i[2]] - 1])
				i[2]++;
			else
			i[2] = 5;
		}
		if (i[2] == 4)
		{
			i[3]++;
			i[4] = i[1];
		}
		i[1]++;
	}
	if (i[3] == 1)
		ft_write_comb(current_tab[i[4]], i[0], matrix);
	i[0]++;
}
