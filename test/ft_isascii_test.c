/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:09:07 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/03 21:37:00 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii (int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	char c = 128;
	char d = 200;

	printf("Non-zero value -> is ascii char\nZero valu - > not ascii char\n");
	printf("c = %c\n", c);
	printf("d = %c\n", d);
	printf("ft_isascii = %d\n", ft_isascii(c));
	printf("ft_isascii = %d\n", ft_isascii(d));
	printf("isascii = %d\n", isascii(c));
	printf("isascii = %d\n", isascii(d));
	
	return (0);
}
