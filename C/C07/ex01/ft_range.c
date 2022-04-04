/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:14:42 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/31 18:34:32 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int min, int max)
{
	int i;
	int *range;

	i = 0;
	if (max - min < 0)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	while(min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
