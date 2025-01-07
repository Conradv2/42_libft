/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:32:20 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/01/07 11:16:59 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void*str, size_t n)
{
	char	*ptr;
	char	c;

	ptr = (char *)str;
	c = 0;
	while (n != 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (str);
}
