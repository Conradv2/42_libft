/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 02:02:36 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/13 16:32:05 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>

void			*ft_bzero(void*str, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memchr(const void*ptr, int ch, size_t count);
int				ft_memcmp(const void*str1, const void*str2, size_t n);
void			*ft_memcpy(void*destination, const void*source, size_t num);
void			*ft_memmove(void*destination, const void*source, size_t num);
void			*ft_memset(void*str, int c, size_t n);
char			*ft_strchr(const char *str, int search_str);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlen(const char*str);
int				ft_strncmp(const char*str1, const char*str2, size_t n);
char			*strnstr(const char *big, const char *little, size_t len);
char			*ft_strrchr(const char *str, int search_str);
int				ft_tolower(int c);
int				ft_toupper(int c);
#endif