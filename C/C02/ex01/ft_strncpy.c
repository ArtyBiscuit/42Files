/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:03:49 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/24 17:38:29 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cmp;

	cmp = 0;
	while (src[cmp] != '\0' && cmp < n)
	{
		dest[cmp] = src[cmp];
		cmp++;
	}
	while (cmp < n)
	{
		dest[cmp++] = '\0';
	}
	return (dest);
}
