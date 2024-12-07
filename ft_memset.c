/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:34:32 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/07 11:19:15 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void*str, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	_c;

	ptr = (unsigned char *)str;
	_c = (unsigned char)c;
	while (n != 0)
	{
		*ptr = _c;
		ptr++;
		n--;
	}
	return (str);
}
