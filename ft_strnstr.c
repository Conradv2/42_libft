/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 02:27:15 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/12 04:13:33 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//Let's start with strstr implementation

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*strnstr(const char *big, const char *little, size_t len)
{
	unsigned char	*_big = (unsigned char *)big;
	unsigned char	*_little = (unsigned char *)little;

	
}

int	main(void)
{
	char t1[] = "Czesc siemaneczko wam wszystkim na moim kanale\n";
	char t2[] = "siemaneczko";
	char *p;

	p = strnstr(t1, t2, sizeof(t1));
	printf("%s\n", p);
	return (0);
}
