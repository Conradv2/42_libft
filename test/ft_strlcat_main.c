/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:16:48 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/07 17:17:06 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main()
{
	char dest[50];
	char source[] = "cze";
	int n = ft_strlcat(dest, source,16);
	printf("Dest: %s\n", dest);
	printf("Length of total dest buffor: %d\n", n);
	return (0);
}
