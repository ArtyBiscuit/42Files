/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_mtx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twinters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:52:00 by twinters          #+#    #+#             */
/*   Updated: 2022/01/22 17:17:15 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_mtx(int **mtx)
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			ft_putchar(mtx[i][j] + '0');
			j++;
			if (j != 5)
				ft_putchar(' ');
		}
		i++;
		ft_putchar('\n');
	}
}
