/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:12:14 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/07 13:26:06 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void*destination, const void*source, size_t num)
{
	unsigned char	*_dest;
	unsigned char	*_source;

	_dest = (unsigned char *)destination;
	_source = (unsigned char *)source;
	while (num != 0)
	{
		*_dest++ = *_source++;
		num--;
	}
	return (destination);
}
