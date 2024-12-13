/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:48:05 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/13 15:53:28 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Baz";
	char *ptr;
	ptr = ft_strnstr(largestring, smallstring, 11);

	printf("ft_strlen largestring: %ld\n", ft_strlen(largestring));
	if (ptr != NULL) 
	{
        printf("Found substring: %s\n", ptr);
    } 
	else
	{
        printf("Substring not found within the given range.\n");
    }
	return (0);
}
