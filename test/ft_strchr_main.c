/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:49:50 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/07 17:50:07 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main () 
{
   const char str[] = "Tutorialspoint";
   // "ch" is search string
   char ch = '\0';
   char *ret;
   ret = strchr(str, ch);
   printf("String after strchr |%c| is - |%s|\n", ch, ret);
   
   char	myTab[] = "siemaneczko, witam w mojej kuchni";
   char lookFor = '\0';
   char *foundstr = ft_strchr(myTab, lookFor);
   printf("String after ft_strchr |%c| is - |%s|\n", lookFor, foundstr);
   return(0);
}