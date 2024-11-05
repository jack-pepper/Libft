#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_p;

	if (s != NULL)
	{
		s_p = (const unsigned char *)s;
		while (n > 0)
		{
			if (*s_p == (unsigned char)c)
			{
				return ((void *)s_p);
			}
			s_p++;
			n--;
		}
	}
	return (NULL);
}
