/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 05:38:13 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/23 18:11:21 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int		ft_swap(int *a, int *b);
void	ft_convert(char *tabx, int **tab);
void	revtab(char **tab12, char **tab13, char **tab14, char **tab23);

void	ft_get_comb(int index1, int index2, int **tab)
{
	char	*tab12;
	char	*tab13;
	char	*tab14;
	char	*tab22;
	char	*tab23;

	tab12 = "421341239";
	tab13 = "4231413243129";
	tab14 = "43219";
	tab22 = "3142324124131423341221439";
	tab23 = "1432243134219";
	if (ft_swap(&index1, &index2) == 1)
		revtab(&tab12, &tab13, &tab14, &tab23);
	if (index1 == 1 && index2 == 2)
		ft_convert(tab12, tab);
	else if (index1 == 1 && index2 == 3)
		ft_convert(tab13, tab);
	else if (index1 == 1 && index2 == 4)
		ft_convert(tab14, tab);
	else if (index1 == 2 && index2 == 3)
		ft_convert(tab23, tab);
	else if (index1 == 2 && index2 == 2)
		ft_convert(tab22, tab);
}

void	revtab(char **tab12, char **tab13, char **tab14, char **tab23)
{
	*tab12 = "321431249";
	*tab13 = "2134231413249";
	*tab14 = "12349";
	*tab23 = "1243134223419";
}

void	ft_convert(char *tabx, int **tab)
{
	int	i;

	i = 0;
	while (tabx[i] != '\0')
	{
		tab[i / 4][i % 4] = *tabx++ - '0';
		i++;
	}
}

void	ft_write_comb(int *comb, int line_index, int **matrix)
{
	int	column_index;

	column_index = 1;
	while (column_index < 5)
	{
		matrix[line_index][column_index] = comb[column_index - 1];
		column_index++;
	}
}
