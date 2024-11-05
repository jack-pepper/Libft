#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(s1) + ft_strlen(s2);
	joined_str = (char *)malloc(sizeof(char) * (len + 1));
	if (joined_str == NULL)
	{
		return (NULL);
	}
	ft_strcpy(joined_str, s1);
	ft_strcat(joined_str, s2);
	return (joined_str);
}