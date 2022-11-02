#include "libft.h"

char	*__strstr(const char *str, const char *find)
{
	size_t		i;
	size_t		find_len;

	i = 0;
	if (*find == '\0')
		return ((char *)str);
	find_len = __strlen(find);
	if (*str == '\0')
		return (NULL);
	if (*find == '\0')
		return ((char *)str);
	while (*str != '\0' )
	{
		if (*str == *find)
		{
			if (__strncmp((char *)str, (char *)find, find_len) == 0)
				return ((char *)str);
		}
		str++;
		i++;
	}
	return (NULL);
}
