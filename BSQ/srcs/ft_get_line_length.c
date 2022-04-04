/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_line_length.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:49:51 by johrober          #+#    #+#             */
/*   Updated: 2022/02/02 19:54:24 by johrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

int	ft_get_line_length(char *str, int i)
{
	int	line_length;

	line_length = 0;
	while (str[i + line_length] && str[i + line_length] != '\n')
		line_length++;
	return (line_length);
}
