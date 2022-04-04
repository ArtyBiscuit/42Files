/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 11:48:46 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/16 15:54:24 by mdi-cras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	cordy;
	int	cordx;

	cordx = 1;
	cordy = 1;
	while (cordy <= y)
	{
		while (cordx <= x)
		{
			if ((cordx == 1 && cordy == 1) || (cordx == x && cordy == y))
				ft_putchar('/');
			else if ((cordx == 1 && cordy == y) || (cordx == x && cordy == 1))
				ft_putchar('\\');
			else if (cordy == 1 || cordx == 1 || cordx == x || cordy == y)
				ft_putchar('*');
			else if ((cordx < x && cordy < y) || cordx > 1 || cordy > 1)
				ft_putchar(' ');
			cordx++;
		}
		cordy++;
		cordx = 1;
		ft_putchar('\n');
	}
}
