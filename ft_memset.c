/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:34:32 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/06 00:36:55 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
typedef unsigned long int size_t;


void	*ft_memset (void*str, int c, size_t n)
{
	unsigned char *ptr = (unsigned char *)str;
	while (n != 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	
	return str;
}


void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}
void char_printArray(char arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%c ", arr[i]);
}

int main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
	char string_array[] = {'a','b','c'};
    // Fill whole array with 0.
    memset(&arr[5], 0, 5*sizeof(arr[0]));
    printf("Array after memset()\n");
    printArray(arr, 10);
	printf("\n");
	int my_arr[] = {1,2,3,4,5,6,7,8,9,10};

	ft_memset(&my_arr[5], 0, 5*sizeof(arr[4]));
	printf("\nMy array after ft_memset()\n");
	printArray(my_arr, 10);
	printf("\n");

	printf("String array: \n");
	char_printArray(string_array, 3);
	printf("\n");
	//ft_memset(string_array, 'Z', 3*sizeof(string_array[0]));
	ft_memset(&string_array[1], 'Z', 2);
	char_printArray(string_array, 3);
	// int c = 0x0002;
	// printf("\n%d\n", c);
    printf("\n");
	return 0;
}