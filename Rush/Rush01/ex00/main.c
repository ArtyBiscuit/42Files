/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrollin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:34:24 by rrollin           #+#    #+#             */
/*   Updated: 2022/01/23 20:05:54 by aforgear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int		ft_parse_input(int *index_tab, char *input);
void	ft_create_mtx(int *index_tab, int **mtx);
void	ft_solve_mtx(int **mtx);
void	ft_print_mtx(int **mtx);

int	main(int argc, char **argv)
{
	int	index_tab[16];
	int	**matrix;
	int	i;
	printf("1");
	if (argc != 2)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	printf("2");
	matrix = (int **)malloc(6 * sizeof(int *));
	i = 0;
	while (i < 6)
		matrix[i++] = (int *)malloc(6 * sizeof(int));
	if (ft_parse_input(index_tab, argv[1]))
		return (0);
	ft_create_mtx(index_tab, matrix);
	ft_solve_mtx(matrix);
	ft_print_mtx(matrix);
	i = 0;
	while (i < 6)
		free(matrix[i++]);
	free(matrix);
	return (0);
}
