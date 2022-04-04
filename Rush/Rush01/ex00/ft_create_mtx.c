/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_mtx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:23:56 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/23 01:03:10 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_coords(int *index_tab, int **mtx)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= 4)
	{
		mtx[0][i++] = index_tab[j++];
	}
	i = 1;
	while (i <= 4)
	{
		mtx[5][i++] = index_tab[j++];
	}
	i = 1;
	while (i <= 4)
	{
		mtx[i++][0] = index_tab[j++];
	}
	i = 1;
	while (i <= 4)
	{
		mtx[i++][5] = index_tab[j++];
	}
}

void	ft_create_mtx(int *index_tab, int **mtx)
{
	int	cmp;
	int	cmp1;

	cmp = 0;
	while (cmp < 6)
	{
		cmp1 = 0;
		while (cmp1 < 6)
		{
			mtx[cmp][cmp1] = 0;
			cmp1++;
		}
		cmp++;
	}
	ft_coords(index_tab, mtx);
}
