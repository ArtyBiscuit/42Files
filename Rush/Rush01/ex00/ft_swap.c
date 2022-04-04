/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:29:29 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/23 18:10:23 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_swap(int	*a,	int	*b)
{
	int	c;

	if (*a > *b)
	{
		c = *a;
		*a = *b;
		*b = c;
		return (1);
	}
	else
	{
		return (0);
	}
}
