#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = ft_strlen(src);
	dest = malloc(sizeof(char) * (i + 1));
	ft_strcpy(dest, src);
	return (dest);
}
