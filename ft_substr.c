/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:01:00 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/19 22:11:52 by conradv2         ###   ########.fr       */
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
		_substr = (char *)malloc(1 * sizeof(char));
		if (_substr == NULL)
			return (NULL);
		_substr[0] = '\0';
		return (_substr);
	}
	_substr = (char *)malloc((len + 1) * sizeof(char));
	if (_substr == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		_substr[i] = s[start];
		i++;
		start++;
	}
	_substr[i] = '\0';
	return (_substr);
}
