/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 02:02:36 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/09 02:26:59 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void			*ft_bzero(void*str, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memcpy(void*destination, const void*source, size_t num);
void			*ft_memmove(void*destination, const void*source, size_t num);
void			*ft_memset(void*str, int c, size_t n);
char			*ft_strchr(const char *str, int search_str);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
unsigned int	ft_strlen(char*str);
char			*ft_strrchr(const char *str, int search_str);
int				ft_tolower(int c);
int				ft_toupper(int c);