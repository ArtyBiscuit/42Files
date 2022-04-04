/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:18:35 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/30 17:37:34 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

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

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i != 0)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
