/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 05:18:21 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/29 17:07:09 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	if (nb < 0)
		return (0);
	if (!nb || nb == 1)
		return (0);
	count = 2;
	while (count <= nb / 2)
	{
		if (!(nb % count))
			return (0);
		count++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}
