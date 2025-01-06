/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:38:05 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/06 15:39:12 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char*str1, const char*str2, size_t n)
{
	int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((str1[i] == str2[i]) && n > 0)
	{
		if (str1[i] == '\0' || str2[i] == '\0')
			break ;
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
