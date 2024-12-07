/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:15:14 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/07 18:15:59 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main () 
{
   const char str[] = "siemaneczko, witam w mojej kuchni";
   // "ch" is search string
   char ch = 'w';
   char *ret;
   ret = strrchr(str, ch);
   printf("String after strchr |%c| is - |%s|\n", ch, ret);
   
   char	myTab[] = "siemaneczko, witam w mojej kuchni";
   //char lookFor = 'w';
   char *foundstr = ft_strrchr(myTab, ch);
   printf("String after ft_strchr |%c| is - |%s|\n", ch, foundstr);
   return(0);
}