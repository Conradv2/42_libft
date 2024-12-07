/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:08:14 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/07 12:08:15 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main() 
{ 
	char	csrc[100] = "Geeksfor";
	char	CHUJ[] = "TEST";

	char	myTAB_dest[100] = "SIEMANO KURWA";
	char	myTAB_source[100] = "WSZYSTKIM";
	memcpy(csrc + 8, &CHUJ[0], sizeof(CHUJ[0])); 
	ft_memcpy(myTAB_dest, myTAB_source, sizeof(myTAB_source));
	printf("%s\n", csrc); 
	printf("%s\n", myTAB_dest);
	return 0; 
}