/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 23:29:54 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/18 23:47:43 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int	*a,	int	*b)
{
	int	c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	cmp;

	cmp = 0;
	while (cmp < size / 2)
	{
		ft_swap(&tab[cmp], &tab[size - cmp - 1]);
		cmp++;
	}
}
