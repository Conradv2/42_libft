/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:56:36 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/20 17:40:45 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*copy;
	int			counter;
	size_t		i;

	i = 0;
	counter = 0;
	while (*s1 != '\0')
	{
		if (*s1 == *set)
		{
			counter++;
			i++;
		}
		i++;
	}
	i = 0;
	copy = (char *)malloc((ft_strlen(s1) - counter) * sizeof(char));
	while (i < ft_strlen(s1))
	{
		if ((s1[i] == set[0]))
		{
			copy[i] = s1[i];
			i++;
		}
		i++;
	}
	return (copy);
}
