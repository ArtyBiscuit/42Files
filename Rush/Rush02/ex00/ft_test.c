/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aforgear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:24:44 by aforgear          #+#    #+#             */
/*   Updated: 2022/01/29 16:32:44 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int ft_test(char *path, char *argv[])
{
	char *t_nbr = argv[1];
	int n_nbr;

	n_nbr = ft_strlen(t_nbr);

	if(n_nbr == 2)
	{
		if(t_nbr[0] == n_nbr)
		{
			ft_print_number_dico(path, (t_nbr[0] + 48) * 10);	
			ft_print_number_dico(path, t_nbr[1] + 48);
		}
	}
}
