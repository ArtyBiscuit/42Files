/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_possibility.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrollin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 03:53:23 by rrollin           #+#    #+#             */
/*   Updated: 2022/01/23 20:09:46 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>

void	ft_check_comb(int ***possibility, int **matrix);

int	check_line(int row, int col, int n, int **mtx)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (i++ != col + 1)
		{
			if (mtx[row + 1][i - 1] == n)
				return (0);
		}
	}
	return (1);
}

int	check_column(int row, int col, int n, int **mtx)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (i++ != row + 1)
		{
			if (mtx[i - 1][col + 1] == n)
				return (0);
		}
	}
	return (1);
}

void	declare_psblty(int ***possibility, int **mtx)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			n = 1;
			while (n < 5)
			{
				if (check_line(i, j, n, mtx) && check_column(i, j, n, mtx))
					possibility[i][j][n - 1] = 1;
				else
					possibility[i][j][n - 1] = 0;
				n++;
			}
			j++;
		}
		i++;
	}
}

void	init_psblty(int **mtx)
{
	int	***possibility;
	int	k;
	int	l;

	possibility = malloc(sizeof(void *) * 4);
	k = 0;
	while (k < 4)
	{
		l = 0;
		possibility[k++] = malloc(sizeof(void *) * 4);
		while (l < 4)
			possibility[k - 1][l++] = malloc(sizeof(int) * 4);
	}
	declare_psblty(possibility, mtx);
	ft_check_comb(possibility, mtx);
	k = 0;
	while (k < 4)
	{
		l = 0;
		while (l < 4)
			free(possibility[k][l++]);
		free(possibility[k++]);
	}
	free(possibility);
}
