/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:25:53 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/02 14:41:21 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_copy;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_copy = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (s_copy == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		s_copy[i] = f(i, s[i]);
		i++;
	}
	s_copy[i] = '\0';
	return (s_copy);
}
