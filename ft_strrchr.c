/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:52:00 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/01/07 11:11:56 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int search_str)
{
	char	*found;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == (unsigned char)search_str)
		{
			found = (char *)&str[i];
			return (found);
		}
		i--;
	}
	return (NULL);
}
