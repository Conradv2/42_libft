/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:19:27 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/09 02:29:33 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{
	char	*found;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == search_str)
		{
			found = (char *)&str[i];
			return (found);
		}
		i++;
	}
	if (search_str == '\0')
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}
