/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:06:58 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/06 18:11:32 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    char dest[11] = "siema123213";
    char src[] = "kurwa123";
    size_t result;
    printf("%s\n",dest);
    printf("%s\n",src);
    
    result = ft_strlcpy(dest,src,sizeof(dest));
    printf("%ld\n", result);
    printf("%s\n",dest);
    printf("%s\n",src);
    return (0);
}