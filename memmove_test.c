/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:03:04 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/06 17:27:55 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
  
    char source[] = "hello world";
    printf("%s\n", source);
    memcpy(source + 2, source, 5);
    printf("%s\n", source);
    
    char source2[] = "hello world";
    printf("%s\n", source2);
    ft_memcpy(source2 + 2, source2, 5);
    printf("%s\n", source2);
    return 0;
}