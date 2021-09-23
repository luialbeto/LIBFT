/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalberto <lalberto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 08:20:54 by lalberto          #+#    #+#             */
/*   Updated: 2021/09/22 08:18:36 by lalberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>

int	ft_toupper(int c);

int	ft_tolower(int c);

int	ft_isalpha(int c);

int ft_isdigit(int c);

int ft_isalnum(int c);

void Ft_bzero(void *s, size_t n);

int ft_isascii(int c);

int ft_isprint(int c);

size_t ft_strlen(const char *str);

void *ft_memset(void *s, int c, size_t n);

// ft_strchr
// ft_strcpy
// ft_strdup
// ft_strrchr

#endif
