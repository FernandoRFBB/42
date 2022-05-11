/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:00:52 by fbittenc          #+#    #+#             */
/*   Updated: 2022/05/11 19:23:15 by fbittenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int ft_isalnum(int c);
int	ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
void *ft_memchr(const void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
char    *ft_strchr(const char *s, int c);
size_t ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);

#endif
