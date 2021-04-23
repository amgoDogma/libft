#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *cpy, size_t n)
{
	size_t	i;

	i = 0;
	if (dest && n != 0)
		dest[0] = '\0';
	while (cpy[i] != '\0')
	{
		if (n > i + 1)
		{
			dest[i] = cpy[i];
			dest[i + 1] = '\0';
		}
		i++;
	}
	return (i);
}
