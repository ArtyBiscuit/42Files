#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f'
		|| c == '\r' || c == '\t' || c == '\v')
	{
		return (1);
	}
	return (0);
}
