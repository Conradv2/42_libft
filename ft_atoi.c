/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:25:38 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/13 18:17:43 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *string)
{
	int		res;
	int		i;
	char	*s;
	int		minus;

	s = (char *)string;
	res = 0;
	i = 0;
	minus = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus++;
		i++;
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			res = res * 10 + s[i] - '0';
		i++;
	}
	if (!(minus % 2 == 0))
		return (res * (-1));
	return (res);
}
