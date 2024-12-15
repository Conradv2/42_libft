/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 21:35:42 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/15 18:39:08 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)malloc(nitems * size);
	i = 0;
	if(str == NULL)
		return (NULL);
	while (i < nitems * size)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
