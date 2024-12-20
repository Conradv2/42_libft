/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 14:49:31 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/20 15:28:05 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		s1_len;
	int		s2_len;
	int		tmp;
	int		i;

	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s3 = (char *)malloc((s1_len + s2_len) + 1 * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	tmp = i;
	i = 0;
	while (s3[i++] != '\0')
	{
		s3[tmp++] = s2[i];
	}
	s3[i] = '\0';
	return (s3);
}
