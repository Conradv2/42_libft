/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:29:19 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/07 13:29:21 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int main() 
{ 
	char	csrc[100] = "SIEMANO KURWA";
	char	CHUJ[100] = " WSZYSTKIM";

	char	myTAB_dest[100] = "SIEMANO KURWA";
	char	myTAB_source[100] = " WSZYSTKIM";
	
	memmove(csrc + 13, CHUJ, sizeof(CHUJ) - 13);
	printf("%s\n", csrc); 

	ft_memmove(myTAB_dest + 13, myTAB_source, sizeof(myTAB_source) - 13);
	printf("%s\n", myTAB_dest);
	return (0);
}
