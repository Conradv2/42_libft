/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 21:22:25 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/29 18:05:59 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	arr_malloc(char **token_arr, int p, size_t token_len)
{
	int	i;

	i = 0;
	token_arr[p] = (char *)malloc((token_len + 1) * sizeof(char));
	if (token_arr[p] == NULL)
	{
		while (i < p)
		{
			free(token_arr[i]);
			i++;
		}
		return (1);
	}
	return (0);
}

int	token_arr_fill(char **token_arr, char const *s, char c)
{
	int			i;
	int			j;
	size_t		token_len;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		token_len = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			token_len++;
			i++;
		}
		if (token_len > 0)
		{
			if (arr_malloc(token_arr, j, token_len) == 1)
				return (1);
			ft_strlcpy(token_arr[j], &s[i - token_len], token_len + 1);
			j++;
		}
	}
	return (0);
}

int	token_counter(char const *s, char c)
{
	int	i;
	int	is_inside;
	int	token_count;

	i = 0;
	is_inside = 0;
	token_count = 0;
	while (s[i] != '\0')
	{
		is_inside = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			if (is_inside != 1)
			{
				token_count++;
				is_inside = 1;
			}
			i++;
		}
	}
	return (token_count);
}

char	**ft_split(char const *s, char c)
{
	size_t	token_amount;
	char	**token_arr;

	if (s == NULL)
		return (NULL);
	token_amount = token_counter(s, c);
	token_arr = (char **)malloc((token_amount + 1) * sizeof(char *));
	if (token_arr == NULL)
		return (NULL);
	token_arr[token_amount] = NULL;
	if (token_arr_fill(token_arr, s, c) == 1)
	{
		free(token_arr);
		return (NULL);
	}
	return (token_arr);
}
