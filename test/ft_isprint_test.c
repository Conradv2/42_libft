/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:07:00 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/04 20:21:18 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	char	c;
	int		result;

	c = 31;
	result = isprint(c);
	printf("1 - > character is alphanumeric \n");
	printf("0 - > character is not alphanumeric\n");
	printf("result is: %d\n", ft_isprint(c));
	printf("ctype.h - > %d\n", result);
	printf("c value = %c\n", c);
	return (0);
}
