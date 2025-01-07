/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 21:35:42 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/07 11:19:41 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*str;

	if (nitems > 0 && size > ((size_t) - 1) / nitems)
		return (NULL);
	str = malloc(nitems * size);
	if (str == NULL)
		return (NULL);
	ft_memset (str, 0, nitems * size);
	return ((void *)str);
}
