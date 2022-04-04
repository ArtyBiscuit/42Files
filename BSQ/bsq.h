/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:53:57 by johrober          #+#    #+#             */
/*   Updated: 2022/02/02 19:55:19 by johrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_matrice	t_matrice;
typedef struct s_cube		t_cube;

struct s_matrice {
	int		size_x;
	int		size_y;
	char	empty;
	char	full;
	char	obstacle;
	int		**matrice;
};

struct s_cube {
	int	x;
	int	y;
	int	air;
};
/**							Algo									**/
t_matrice	ft_solve(t_matrice tab);
/**						Print Matrice								**/
void		ft_print_mtx(t_matrice tab);

/**							utils									**/
char		*ft_strdup(char *str);
int			ft_strlen(char *str);
char		*ft_strcat_realloc(char *s1, char *s2, int size);
int			ft_atoi(char *str, int size);
char		*ft_strcpy(char *dest, char *src);

/**						ft_read_file								**/
char		*ft_read_file(char *map_txt);
char		*ft_read_input(void);
int			ft_get_nb_line(char *buffer, int *buf_count);

/**						ft_parse_data								**/
t_matrice	*ft_parse_data(char *map);
int			ft_get_tab_parameters(char *str, t_matrice *tab, int *i);
int			ft_get_size_x(char *str, t_matrice *tab, int i);
int			ft_fill_matrice(char *str, t_matrice *tab, int i);
t_matrice	*ft_free_matrice(t_matrice *tab);
int			ft_get_line_length(char *str, int i);

#endif
