/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:01:00 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/07 11:12:00 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*_substr;
	size_t		i;
	size_t		s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	_substr = (char *)malloc((len + 1) * sizeof(char));
	if (_substr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		_substr[i++] = s[start++];
	}
	_substr[i] = '\0';
	return (_substr);
}
