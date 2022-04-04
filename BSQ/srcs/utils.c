/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:42:38 by johrober          #+#    #+#             */
/*   Updated: 2022/02/02 19:44:43 by johrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

char	*ft_strdup(char *str)
{
	char	*dup;
	int		count;

	dup = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (dup == NULL)
		return (NULL);
	count = 0;
	while (str[count])
	{
		dup[count] = str[count];
		count++;
	}
	dup[count] = 0;
	return (dup);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = 0;
	return (dest);
}

char	*ft_strcat_realloc(char *s1, char *s2, int size)
{
	char	*str;
	int		length;
	int		i;
	int		j;

	length = ft_strlen(s1) + size + 1;
	str = malloc(sizeof(char) * length);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] && j < size)
	{
		str[i++] = s2[j++];
	}
	str[i] = 0;
	free(s1);
	return (str);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	ft_atoi(char *str, int size)
{
	int	count;
	int	sign;
	int	total;

	count = 0;
	sign = 1;
	total = 0;
	while (str[count] >= '0' && str[count] <= '9' && count < size)
	{
		total *= 10;
		total += str[count] - '0';
		count++;
	}
	return (total * sign);
}
