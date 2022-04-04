/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:12:00 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/20 23:10:54 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	cmp;

	cmp = 0;
	while (str[cmp] != '\0')
	{
		if (str[cmp] >= 'A' && str[cmp] <= 'Z')
		{
			cmp++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
