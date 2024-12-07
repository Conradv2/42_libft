/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:27:45 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/07 15:51:41 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	int 	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while((*src != '\0') && (i < size - 1))
		{
			*dest++ = *src++;
			i++;
		}	
		*dest = '\0';
	}
	else
		dest[0] = '\0';
	
	return (len);
}

int	main()
{
	char dest[50];
	char source[] = "Hello, world!";
	int n = ft_strlcpy(dest, source, 13);
	printf("Dest: %s\n", dest);
	printf("Length of src: %d\n", n);
	return (0);
}