/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:58:40 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/28 09:56:42 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	*yolo;

	yolo = "2147483648";
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			write(1, yolo, 10);
			return ;
		}
		nb = -nb;
	}
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + 48);
}
