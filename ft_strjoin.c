#include "libft.h"
#include <limits.h>
#include <errno.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s1_len > LONG_MAX - s2_len)
	{
		errno = ENOMEM;
		return (NULL);
	}
	res = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, s1_len + 1);
	ft_strlcpy(res + s1_len, s2, s2_len + 1);
	return (res);
}