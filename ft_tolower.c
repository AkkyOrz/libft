#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c = 'a' + (c - 'A');
	return (c);
}
