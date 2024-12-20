/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:01:00 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/20 14:32:32 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*_substr;
	size_t		i;
	size_t		sub_len;

	i = 0;
	sub_len = ft_strlen(s) - start;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (sub_len > len)
		sub_len = len;
	_substr = (char *)malloc((sub_len + 1) * sizeof(char));
	if (_substr == NULL)
		return (NULL);
	while ((i < len && i < ft_strlen(s)) && s[start] != '\0')
	{
		_substr[i++] = s[start++];
	}
	_substr[i] = '\0';
	return (_substr);
}
