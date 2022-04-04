#include "libft.h"

void number_convert(char *path, char *nbr);
void ft_divise_number(char *nbr, char *buff, char *buff2);

int	main(int argc, char *argv[])
{
	char path[] = "numbers.dict";

	int i;
	i = ft_print_number_dico(path, argv[1]);
	if(i == 1)
		ft_putstr("il existe\n");
	else
		ft_putstr("il nexiste pas\n");


	return (0);
}
