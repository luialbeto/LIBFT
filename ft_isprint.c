#include "libft.h"

int ft_isprint(int c)
{
	if (ft_isascii(c) !=0)
	{
		return (c);
	}
	return (0);
}
