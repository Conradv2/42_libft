/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:12:14 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/13 16:07:45 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void*destination, const void*source, size_t num)
{
	unsigned char	*_dest;
	unsigned char	*_source;

	_dest = (unsigned char *)destination;
	_source = (unsigned char *)source;
	if ((_dest == _source) || num == 0)
		return (destination);
	if ((_dest < _source) || (_dest >= _source + num))
	{
		_dest = ft_memcpy(_dest, _source, num);
	}
	else
	{
		while (num > 0)
		{
			_dest[num - 1] = _source[num - 1];
			num--;
		}
	}
	return (destination);
}
