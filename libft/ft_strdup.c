#include "libft.h"

char *ft_strdup(const char *str)
{
	void *dest;
	int i, num;

	i = 0;
	num = (int)ft_strlen(str)+1;
	dest = (void *)malloc(num);
	if (dest)
		ft_strlcpy(dest, str, num);
	return (dest);
}
