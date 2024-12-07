/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:57:54 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/07 15:57:56 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
int	main()
{
	char dest[50];
	char source[] = "Hello, world!";
	int n = ft_strlcpy(dest, source, 13);
	printf("Dest: %s\n", dest);
	printf("Length of src: %d\n", n);
	return (0);
}