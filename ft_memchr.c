/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 02:01:42 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/10 02:27:23 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void*ptr, int ch, size_t count)
{
	unsigned char	*ptr1;
	unsigned char	ch1;

	ch1 = (unsigned char)ch;
	ptr1 = (unsigned char *)ptr;
	while (*ptr1 != '\0' && count > 0)
	{
		if (*ptr1 == ch1)
			return (ptr1);
		ptr1++;
		count--;
	}
	return (NULL);
}
