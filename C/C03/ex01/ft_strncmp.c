/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:27:09 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/26 16:22:59 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cmp;

	cmp = 0;
	while (n != cmp && (s1[cmp] || s2[cmp]))
	{
		if (s1[cmp] != s2[cmp])
		{
			return (s1[cmp] - s2[cmp]);
		}
		cmp++;
	}
	return (0);
}
