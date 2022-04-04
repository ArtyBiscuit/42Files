/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:07:19 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/29 17:05:29 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (!index || index == 1)
		return (index);
	else if (index < 0)
		return (-1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
