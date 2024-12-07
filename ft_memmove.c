/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:12:14 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/07 13:22:40 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void*destination, const void*source, size_t num)
{	
	unsigned char	*_dest;
	unsigned char	*_source; 
	size_t			i;

	i = 0;
	_dest = (unsigned char *)destination;
	_source = (unsigned char *)source;

	if ((_dest == _source) || num == 0)
		return (destination);

	if ((_dest < _source) || (_dest >= _source + num))
	{
		while (i < num)
		{
			*_dest = *_source;
			_dest++;
			_source++;
			i++;
		}
		i = num;
	}
	else 
		while (i > 0)
		{
			_dest[i - 1] = _source[i - 1];
			_dest++;
			_source++;
			i--;
		}
	return (destination);
}

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
	return 0; 
}