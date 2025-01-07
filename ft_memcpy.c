/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:12:14 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/01/07 10:22:00 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void*destination, const void*source, size_t num)
{
	unsigned char		*_dest;
	const unsigned char	*_source;

	if (destination == NULL && source == NULL)
		return (destination);
	_dest = (unsigned char *)destination;
	_source = (const unsigned char *)source;
	while (num != 0)
	{
		*_dest++ = *_source++;
		num--;
	}
	return (destination);
}
