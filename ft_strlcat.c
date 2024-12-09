/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:27:45 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/09 02:29:44 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	space_left;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	space_left = size - dest_len - 1;
	i = 0;
	if (size <= dest_len)
		return (size + src_len);
	dest += dest_len;
	while ((*src != '\0') && (i < space_left))
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (dest_len + src_len);
}
