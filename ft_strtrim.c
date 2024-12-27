/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:56:36 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/27 17:24:39 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (start <= end && strchr(set, s1[start]) != NULL)
		start++;
	while (end >= start && strchr(set, s1[end]) != NULL)
		end--;
	if (start > end)
		return (ft_strdup(""));
	copy = (char *)malloc((end - start + 2) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (start <= end)
	{
		copy[i] = s1[start];
		i++;
		start++;
	}
	copy[i] = '\0';
	return (copy);
}
