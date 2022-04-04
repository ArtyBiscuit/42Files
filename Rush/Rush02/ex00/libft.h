#ifndef LIB_FT
#define LIB_FT

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
//a enlever vvvvv
#include <stdio.h>

#define TRUE 1
#define FALSE 1
typedef int t_bool;

int		ft_isspace(char c);
void	ft_putstr(char *str);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
int ft_print_number_dico(char *path, char *nbr);

#endif
