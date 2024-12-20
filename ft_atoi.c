/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:25:38 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/20 13:26:54 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *string)
{
	int		res;
	int		i;
	int		minus;

	res = 0;
	i = 0;
	minus = 1;
	if (string == NULL)
		return (0);
	while ((string[i] >= 9 && string[i] <= 13) || string[i] == ' ')
		i++;
	if (string[i] == '-' || string[i] == '+')
	{
		if (string[i] == '-')
			minus = -1;
		i++;
	}
	while (string[i] >= '0' && string[i] <= '9')
	{
		res = res * 10 + string[i] - '0';
		i++;
	}
	return (res * minus);
}
