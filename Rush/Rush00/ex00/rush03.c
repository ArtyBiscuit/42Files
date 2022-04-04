/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 11:48:46 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/16 16:24:14 by jgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	cordx;
	int	cordy;

	cordx = 1;
	cordy = 1;
	while (cordy <= y)
	{
		while (cordx <= x)
		{
			if ((cordx == 1 && cordy == 1) || (cordx == 1 && cordy == y))
				ft_putchar('A');
			else if ((cordx == x && cordy == 1) || (cordx == x && cordy == y))
				ft_putchar('C');
			else if (cordy == 1 || cordx == 1 || cordx == x || cordy == y)
				ft_putchar('B');
			else if ((cordx < x && cordy < y) || cordx > 1 || cordy > 1)
				ft_putchar(' ');
			cordx++;
		}
		cordy++;
		cordx = 1;
		ft_putchar('\n');
	}
}
