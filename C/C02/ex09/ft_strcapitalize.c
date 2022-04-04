/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:54:02 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/20 23:14:32 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	cmp;

	cmp = 0;
	while (str[cmp] != '\0')
	{
		if (str[cmp] >= 65 && str[cmp] <= 90)
		{
			str[cmp] = str[cmp] + 32;
		}
		cmp++;
	}
	return (str);
}

int	ft_is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	cmp;

	cmp = 0;
	ft_strlowcase(str);
	while (str[cmp])
	{
		if (ft_is_alphanumeric(str[cmp]) && !ft_is_alphanumeric(str[cmp - 1]))
			if (str[cmp] >= 'a' && str[cmp] <= 'z')
				str[cmp] -= 32;
		cmp++;
	}
	return (str);
}
