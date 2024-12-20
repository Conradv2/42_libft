/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:01:00 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/20 13:20:59 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*_substr;
	size_t		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		_substr = ft_strdup("");
		return (_substr);
	}
	if (len >= ft_strlen(s))
		_substr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (len < ft_strlen(s))
		_substr = (char *)malloc((len + 1) * sizeof(char));
	if (_substr == NULL)
		return (NULL);
	while ((i < len && i < ft_strlen(s)) && s[start] != '\0')
	{
		_substr[i++] = s[start++];
	}
	_substr[i] = '\0';
	return (_substr);
}
