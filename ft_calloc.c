
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	size_t	arr_size;

	if (nmemb == 0 || size == 0 || nmemb > (SIZE_MAX / size))
	{
		return (NULL);
	}
	arr_size = (nmemb * size);
	array = malloc(arr_size);
	if (array == NULL)
	{
		return (NULL);
	}
	ft_memset(array, 0, arr_size);
	return (array);
}
