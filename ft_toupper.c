#include "libft.h"
int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c = 'A' + (c - 'a');
	return (c);
}
