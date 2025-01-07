/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 02:01:42 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/07 11:11:17 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void*ptr, int ch, size_t count)
{
	unsigned char	*ptr1;
	unsigned char	ch1;

	ch1 = (unsigned char)ch;
	ptr1 = (unsigned char *)ptr;
	while (count > 0)
	{
		if (*ptr1 == ch1)
			return (ptr1);
		ptr1++;
		count--;
	}
	return (NULL);
}
