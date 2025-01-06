/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:56:25 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/06 18:05:05 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    char dest[11] = "hello";
    char src[] = "world";
    printf("%s\n",dest);
    printf("%s\n",src);

    ft_strlcat(dest,src,sizeof(dest));
    printf("%ld\n", sizeof(dest));
    printf("%s\n",dest);
    return (0);
}