/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_mtx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:50:06 by fleblanc          #+#    #+#             */
/*   Updated: 2022/01/23 20:08:03 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_psblty(int **mtx);

void	place_fours_mtx(int **mtx)
{
	int	i;

	i = 1;
	while (i < 6)
	{
		if (mtx[0][i] == 1)
			mtx[1][i] = 4;
		if (mtx[i][5] == 1)
			mtx[i][4] = 4;
		if (mtx[5][i] == 1)
			mtx[4][i] = 4;
		if (mtx[i][0] == 1)
			mtx[i][1] = 4;
		i++;
	}
}

void	ft_place_fourth_nb(int nb, int **mtx)
{
	int	count;
	int	i;
	int	j;
	int	row_col[2];

	j = 1;
	count = 0;
	row_col[0] = 10;
	row_col[1] = 10;
	while (j <= 4)
	{
		i = 1;
		while (i <= 4)
		{
			if (mtx[j][i++] == nb)
			{
				count++;
				row_col[0] -= j;
				row_col[1] -= i - 1;
			}
		}
		j++;
	}
	if (count == 3)
		mtx[row_col[0]][row_col[1]] = nb;
}

void	place_123_mtx(int **mtx)
{
	int	i;
	int	j;

	i = 1;
	while (i < 6)
	{
		j = 0;
		while (j < 2)
		{
			if (mtx[j * 5][i] == 4)
			{
				mtx[j + 1][i] = 1 + 2 * j;
				mtx[j + 2][i] = 2;
				mtx[j + 3][i] = 3 - 2 * j;
			}
			if (mtx[i][j * 5] == 4)
			{
				mtx[i][j + 1] = 1 + 2 * j;
				mtx[i][j + 2] = 2;
				mtx[i][j + 3] = 3 - 2 * j;
			}
			j++;
		}
		i++;
	}
}

void	place_three_mtx(int **mtx)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (mtx[i][0] == 1 && mtx[i][5] == 2)
			mtx[i][4] = 3;
		if (mtx[i][5] == 1 && mtx[i][0] == 2)
			mtx[i][1] = 3;
		if (mtx[0][i] == 1 && mtx[5][i] == 2)
			mtx[4][i] = 3;
		if (mtx[5][i] == 1 && mtx[0][i] == 2)
			mtx[1][i] = 3;
		i++;
	}
}

int	ft_solve_mtx(int **mtx)
{
	int	i;

	place_fours_mtx(mtx);
	place_123_mtx(mtx);
	place_three_mtx(mtx);
	i = 1;
	while (i < 5)
		ft_place_fourth_nb(i++, mtx);
	init_psblty(mtx);
	i = 1;
	while (i < 5)
		ft_place_fourth_nb(i++, mtx);
	i = 1;
	while (i < 5)
		ft_place_fourth_nb(i++, mtx);
	i = 1;
	while (i < 5)
		ft_place_fourth_nb(i++, mtx);
	i = 1;
	while (i < 5)
		ft_place_fourth_nb(i++, mtx);
	return (0);
}
