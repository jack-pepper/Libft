#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	if (s == NULL || (size_t)start + len > s_len)
	{
		return (NULL);
	}
	substring = (char *)malloc(sizeof(char) * len + 1);
	if (substring == NULL)
	{
		return NULL;
	}
	i = 0;
	while (i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

int	main(void)
{
	char	s[30] = "Hello dirty old silly world";
	printf("Sub: %s", ft_substr(s, 6, 9));
}
