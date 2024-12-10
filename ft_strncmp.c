/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:38:05 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/10 01:59:37 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char*str1, const char*str2, size_t n)
{
	int	i;

	i = 0;
	while ((str1[i] == str2[i]) && str1[i] && str2[i] && n > 0)
	{
		if (str1[i] == '\0')
			return (0);
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
