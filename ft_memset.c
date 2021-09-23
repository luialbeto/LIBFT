/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalberto <lalberto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:13:47 by lalberto          #+#    #+#             */
/*   Updated: 2021/09/22 08:55:45 by lalberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	char *str;

	if (s != NULL)
	{
		str = s;
		while (n)
		{
			*str = c;
			str++;
			n--;
		}
	}
	return (s);
}
