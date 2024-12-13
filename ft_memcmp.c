/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:38:05 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/13 16:29:03 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void*str1, const void*str2, size_t n)
{
	unsigned char	*str1_ptr;
	unsigned char	*str2_ptr;
	int				i;

	str1_ptr = (unsigned char *)str1;
	str2_ptr = (unsigned char *)str2;
	i = 0;
	while ((str1_ptr[i] == str2_ptr[i]) && str1_ptr[i] && str2_ptr[i] && n > 0)
	{
		if (str1_ptr[i] == '\0')
			return (0);
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)str1_ptr[i] - (unsigned char)str2_ptr[i]);
}
