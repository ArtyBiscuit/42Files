/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:03:34 by johrober          #+#    #+#             */
/*   Updated: 2022/02/02 19:54:54 by johrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

t_matrice	*ft_parse_data(char *str)
{	
	t_matrice	*tab;
	int			i;
	int			count;

	i = 0;
	tab = malloc(sizeof(t_matrice));
	if (tab == NULL || ft_get_tab_parameters(str, tab, &i))
		return (ft_free_matrice(tab));
	i++;
	tab->matrice = malloc(sizeof(int *) * tab->size_y);
	if (tab->matrice == NULL)
		return (ft_free_matrice(tab));
	count = 0;
	while (count < tab->size_y)
	{
		tab->matrice[count] = malloc(sizeof(int) * tab->size_x);
		if (tab->matrice[count] == NULL)
			return (ft_free_matrice(tab));
		count++;
	}
	if (ft_fill_matrice(str, tab, i))
		return (ft_free_matrice(tab));
	return (tab);
}

int	ft_get_tab_parameters(char *str, t_matrice *tab, int *i)
{
	if (str[*i] && str[*i] >= '0' && str[*i] <= '9')
	{
		tab->size_y = ft_atoi(str, ft_get_line_length(str, *i) - 3);
		*i += ft_get_line_length(str, *i) - 3;
	}
	else
		return (1);
	if (str[*i] && str[*i] >= ' ' && str[*i] <= '~')
		tab->empty = str[(*i)++];
	else
		return (1);
	if (str[*i] && str[*i] >= ' ' && str[*i] <= '~' && str[*i] != tab->empty)
		tab->obstacle = str[(*i)++];
	else
		return (1);
	if (str[*i] && str[*i] >= ' ' && str[*i] <= '~' && str[*i] != tab->obstacle
		&& str[*i] != tab->empty)
		tab->full = str[(*i)++];
	else
		return (1);
	if (ft_get_size_x(str, tab, *i))
		return (1);
	return (0);
}

int	ft_get_size_x(char *str, t_matrice *tab, int i)
{
	if (str[i] && str[i] != '\n')
		return (1);
	i++;
	tab->size_x = 0;
	while (str[i] && str[i++] != '\n')
		tab->size_x++;
	if (tab->size_x < 1 || tab->size_y < 1)
		return (1);
	return (0);
}

int	ft_fill_matrice(char *str, t_matrice *tab, int i)
{
	int	x;
	int	y;

	x = -1;
	y = 0;
	while (str[i])
	{
		if (++x > tab->size_x || y > tab->size_y)
			return (1);
		else if (str[i] == tab->empty)
			tab->matrice[y][x] = 1;
		else if (str[i] == tab->obstacle)
			tab->matrice[y][x] = 0;
		else if (str[i] == '\n' && x == tab->size_x)
		{
			x = -1;
			y++;
		}
		else
			return (1);
		i++;
	}
	if (y != tab->size_y)
		return (1);
	return (0);
}

t_matrice	*ft_free_matrice(t_matrice *tab)
{
	int	count;

	if (tab == NULL)
		return (NULL);
	if (tab->matrice == NULL)
	{
		free(tab);
		return (NULL);
	}
	count = 0;
	while (count < tab->size_y)
	{
		if (tab->matrice[count] == NULL)
		{
			free(tab->matrice);
			free(tab);
			return (NULL);
		}
		else
			free(tab->matrice[count]);
		count++;
	}
	free(tab->matrice);
	free(tab);
	return (NULL);
}
