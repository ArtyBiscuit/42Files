/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrollin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:19:47 by rrollin           #+#    #+#             */
/*   Updated: 2022/01/22 17:25:09 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_parse_input(int *index_tab, char *input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if ((i % 2 && input[i] != ' ')
			|| (!(i % 2) && !(input[i] >= '1' && input[i] <= '4')))
		{
			write(2, "Error\n", 6);
			return (1);
		}
		else if (!(i % 2) && input[i] >= '1' && input[i] <= '4')
			index_tab[i / 2] = input[i] - 48;
		i++;
	}
	if (i != 31)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}
