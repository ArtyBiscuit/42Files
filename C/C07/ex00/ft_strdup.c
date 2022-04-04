/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:48:14 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/31 14:34:55 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char	*str)
{
	int	cmp;

	cmp = 0;
	while (*str != '\0')
	{
		str++;
		cmp++;
	}
	return (cmp);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	cmp;

	cmp = 0;
	while (src[cmp] != '\0')
	{
		dest[cmp] = src[cmp];
		cmp++;
	}
	dest[cmp] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
	ft_strcpy(dup, src);
	return (dup);
}
