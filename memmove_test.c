/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:03:04 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/06 19:11:32 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
  
    //                1,2,1,2,3,4,5,6,7,8
    int source[10] = {1,2,3,4,5,6,7,8,9,10};
    //                1,2,3,4,5,6,7,8,9,10
    //                1 2 3 1 2 3 4 5 6 7    
    ft_memmove(source + 3, source, sizeof(int) * 7);
    for (int i = 0; i < 10; i++)
    {
        printf("source[%d] = %d\n", i, source[i]);
    }
    return 0;
}