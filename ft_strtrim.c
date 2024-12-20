/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:56:36 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/20 18:10:05 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*_s1;
	char	*copy;
	int		counter;
	size_t	i;

	_s1 = (char *)s1;
	i = 0;
	while (i < ft_strlen(_s1))
	{
		if (set[i] == _s1[i])
			counter++;
		i++;
	}
	copy = (char *)malloc((ft_strlen(_s1) - counter + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(_s1) - counter)
	{
		if (set[i] == _s1[i])
			copy[i] = _s1[i];
		i++;
	}
	return (copy);
}
int	main(void)
{
	char s1[] = " TEST ";
	char s2[] = " ";

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", ft_strtrim(s1,s2));
	printf("%s\n", s1);
	return (0);
}