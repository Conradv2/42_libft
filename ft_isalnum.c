/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:30:43 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/03 19:55:05 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>


int	ft_isalnum (int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	char c = '!';
	int result = isalnum(c);

	printf("1 - > character is alphanumeric \n");
	printf("0 - > character is not alphanumeric\n");
	printf("result is: %d\n", ft_isalnum(c));
	printf("ctype.h - > %d\n", result);
	return (0);
}
