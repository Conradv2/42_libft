/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:54:41 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/13 16:07:09 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	c;
	int		result;

	c = 87;
	result = isalnum(c);
	printf("1 - > character is alphanumeric \n");
	printf("0 - > character is not alphanumeric\n");
	printf("result is: %d\n", ft_isalnum(c));
	printf("ctype.h - > %d\n", result);
	printf("c value = %c\n", c);
	return (0);
}
