/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:06:29 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/28 10:24:32 by aforgear         ###   ########.fr       */
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

int	main(int ac, char **av)
{
	(void)ac;
	write(1, av[0], ft_strlen(av[0]));
	write(1, "\n", 1);
	return (0);
}
