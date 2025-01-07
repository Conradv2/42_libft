/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:14:54 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/07 11:11:40 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup( const char *str1 )
{
	char	*cpy;
	int		str1_len;

	str1_len = ft_strlen(str1);
	cpy = (char *)malloc((str1_len + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	while (*str1 != '\0')
	{
		*cpy++ = *str1++;
	}
	*cpy = '\0';
	return (cpy - str1_len);
}
