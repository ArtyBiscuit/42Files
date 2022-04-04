/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 10:26:41 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/24 17:57:03 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	cmp;

	cmp = 0;
	while (s1[cmp] || s2[cmp])
	{
		if (s1[cmp] != s2[cmp])
		{
			return (s1[cmp] - s2[cmp]);
		}
		cmp++;
	}
	return (0);
}
