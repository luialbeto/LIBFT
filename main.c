/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalberto <lalberto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 08:27:02 by lalberto          #+#    #+#             */
/*   Updated: 2021/09/22 08:58:55 by lalberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
// #include <ctype.h>
// #include <string.h>

int main()
{
	char a[5] = "abcde";

	// printf("%d\n", ft_tolower(65));
	// printf("%d\n", ft_toupper(100));
	// printf("%d\n", ft_isalpha(90));
	// printf("%d\n", ft_isdigit(50));
	// printf("%d\n", ft_isalnum(61));
	// printf("%", ft_bzero(?));
	// printf("%d\n", ft_isascii(128));
	// printf("%d\n", ft_isprint(-128));
	// printf("%zu\n", ft_strlen(a));
	ft_memset(a + 2, 'a', 5*sizeof(char));
	printf("%s\n", a);
	return(0);
}
