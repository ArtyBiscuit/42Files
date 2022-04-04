/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:24:18 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/31 18:50:36 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (max - min < 0)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}

int main(void)
{
	int min;
	int max;
	int *range;
	int tab_length;
	int j;
	
	j = 0;
	min = 0;
	max = 0;
	tab_length = ft_ultimate_range(&range, min, max);

	while(j < tab_length)
	{
		printf("%d\n", range[j]);
		j++;
	}
}

