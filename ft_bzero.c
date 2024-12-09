/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:32:20 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/09 02:27:38 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void*str, size_t n)
{
	unsigned char	*ptr;
	unsigned char	c;

	ptr = (unsigned char *)str;
	c = 0;
	while (n != 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (str);
}
