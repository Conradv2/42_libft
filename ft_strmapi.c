/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:25:53 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/07 11:11:51 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_copy;
	size_t	i;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	s_copy = (char *)malloc((s_len + 1) * sizeof(char));
	if (s_copy == NULL)
		return (NULL);
	while (i < s_len)
	{
		s_copy[i] = f(i, s[i]);
		i++;
	}
	s_copy[i] = '\0';
	return (s_copy);
}
